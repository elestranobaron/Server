#include "stdafx.h"
#include "TFC Server.h"
#include "AsyncFuncQueue.h"
#include "TFCServerGP.h"
#include "DeadlockDetector.h"
#include <process.h>
#include "ThreadMonitor.h"


//////////////////////////////////////////////////////////////////////////////////////////
AsyncFuncQueue::AsyncFuncQueue()
//////////////////////////////////////////////////////////////////////////////////////////
{
}

//////////////////////////////////////////////////////////////////////////////////////////
void AsyncFuncQueue::Initialize( void )
//////////////////////////////////////////////////////////////////////////////////////////
// Initializes the async func queue thread.
// 
//////////////////////////////////////////////////////////////////////////////////////////
{	
	// If thread is uninitialized
	if( hThreadID == NULL ){
        static CLock initialLock;
        CAutoLock autoLock( &initialLock );

		// Create the IO Completion port associated with the thread, before it starts.
		hIoCompletion = CreateIoCompletionPort(INVALID_HANDLE_VALUE, NULL, 0, 1);

		// Start the thread.
		UINT threadId;
        hThreadID = (HANDLE)_beginthreadex( NULL, 0, AsyncFuncQueueThread, this, CREATE_SUSPENDED, &threadId );

        ResumeThread( hThreadID );
	}
}

//////////////////////////////////////////////////////////////////////////////////////////
void AsyncFuncQueue::Call
//////////////////////////////////////////////////////////////////////////////////////////
// Adds a function to be called by the function queue thread.
// 
(
 ASYNC_FUNC lpFunc, // The function to call
 LPVOID lpData		// The data to pass as parameter
)
//////////////////////////////////////////////////////////////////////////////////////////
{
	// Initialize thread
	Initialize();

	ASYNC_FUNC_DATA *lpFuncData = new ASYNC_FUNC_DATA;
	lpFuncData->lpFunc = lpFunc;
	lpFuncData->lpData = lpData;

	PostQueuedCompletionStatus( hIoCompletion, 0, (DWORD)lpFuncData, NULL );
}

//////////////////////////////////////////////////////////////////////////////////////////
UINT AsyncFuncQueue::AsyncFuncQueueThread
//////////////////////////////////////////////////////////////////////////////////////////
// The async func queue thread. Calls each queued function calls
// 
(
 LPVOID lpVoid // The AsyncFuncQueue instance.
)
//////////////////////////////////////////////////////////////////////////////////////////
{
	CAutoThreadMonitor tmMonitor("AsyncFuncQueue");
    AsyncFuncQueue *pThis = reinterpret_cast< AsyncFuncQueue * >( lpVoid );
    pThis->AsyncFuncQueueFunc();
    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////
void AsyncFuncQueue::AsyncFuncQueueFunc()
//////////////////////////////////////////////////////////////////////////////////////////
{
    CoInitialize( NULL );
    // Force thread to run on the first CPU.
    //SetThreadAffinityMask( hThreadID, 1 );
    _LOG_DEBUG
        LOG_DEBUG_LVL1,
        "AsyncFuncQueueThread Id=%u",
        GetCurrentThreadId()
    LOG_

	DWORD dwStopMessage = 0;
	DWORD dwlpFuncData;
	ASYNC_FUNC_DATA *lpFuncData;
	LPOVERLAPPED s_oDummy;

    CDeadlockDetector cDeadlockDetector;
    cDeadlockDetector.RegisterThread( hThreadID, "AsyncFuncQueue Thread", 300000  );

	// Read until its time to terminate the thread.
	while( dwStopMessage == 0 ){
		ENTER_TIMEOUT
        // Get the next queued function
		if( GetQueuedCompletionStatus( hIoCompletion, &dwStopMessage, &dwlpFuncData, &s_oDummy, INFINITE )){
            LEAVE_TIMEOUT
			// If this isn't a thread termination message
			if( dwStopMessage == 0 ){
				lpFuncData = (ASYNC_FUNC_DATA *)( dwlpFuncData );
				
				// Call the function with its parameters
                _LOG_DEBUG
                    LOG_DEBUG_HIGH,
                    "\r\nEntering async function. func adress 0x%x",
                    lpFuncData->lpFunc
                LOG_

                lpFuncData->lpFunc( lpFuncData->lpData );

                _LOG_DEBUG
                    LOG_DEBUG_HIGH,
                    "\r\nLeaving async function"
                LOG_

				// Delete the async data object.
				delete lpFuncData;
			}
		}            
	}

    CoUninitialize();
    STOP_DEADLOCK_DETECTION
}

//////////////////////////////////////////////////////////////////////////////////////////
AsyncFuncQueue *AsyncFuncQueue::GetAcctQueue()
//////////////////////////////////////////////////////////////////////////////////////////
{
    static AsyncFuncQueue instance;
    return &instance;
}

//////////////////////////////////////////////////////////////////////////////////////////
AsyncFuncQueue *AsyncFuncQueue::GetMainQueue()
//////////////////////////////////////////////////////////////////////////////////////////
{
    static AsyncFuncQueue instance;
    return &instance;
}