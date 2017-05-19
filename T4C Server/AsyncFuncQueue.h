#if !defined(AFX_ASYNCFUNCQUEUE_H__EFFD7FAE_F0BA_11D1_830E_00104B2CA38F__INCLUDED_)
#define AFX_ASYNCFUNCQUEUE_H__EFFD7FAE_F0BA_11D1_830E_00104B2CA38F__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#include "VDList.h"

typedef void ( *ASYNC_FUNC )( LPVOID lpData );

//////////////////////////////////////////////////////////////////////////////////////////
// This class handles queued function calls. Allows asynchronous calls to functions 
// without having to start a new thread each time.
class __declspec( dllexport ) AsyncFuncQueue
{
public:	
	void Destroy( void );

	void Call( ASYNC_FUNC lpFunc, LPVOID lpData );

    static AsyncFuncQueue *GetMainQueue();
    static AsyncFuncQueue *GetAcctQueue();

private:
    AsyncFuncQueue();

	void Initialize( void );

	struct ASYNC_FUNC_DATA{
		ASYNC_FUNC lpFunc;
		LPVOID lpData;
	};

	HANDLE hIoCompletion;
	HANDLE hThreadID;

	static UINT CALLBACK AsyncFuncQueueThread( LPVOID lpVoid );
    void AsyncFuncQueueFunc();
};

#endif // !defined(AFX_ASYNCFUNCQUEUE_H__EFFD7FAE_F0BA_11D1_830E_00104B2CA38F__INCLUDED_)
