#if !defined(AFX_SHUTDOWN_H__5287585B_799D_11D2_844C_00E02922FA40__INCLUDED_)
#define AFX_SHUTDOWN_H__5287585B_799D_11D2_844C_00E02922FA40__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#include <vector>

using namespace std;

#define SHUTDOWN_NOW    0

typedef struct _SHUTDOWN{
    DWORD dwInitialTime;
    int   nMinutesLeft;
    bool  boEcho;
    //bool  boNotifyWatchdog;
}SHUTDOWN, *LPSHUTDOWN;


typedef void (*SHUTDOWN_FUNC)( LPSHUTDOWN lpShutdown );

class CShutdown  
{
public:
	virtual ~CShutdown();    

    static bool CreateShutdown( DWORD dwTime = SHUTDOWN_NOW, bool boEcho = true, 
                          /*bool boNotifyWatchdog = true, */bool boOverideShutdown = false );
    static void StartShutdown( void );

    static void AddPreShutdownFunc( SHUTDOWN_FUNC lpShutdownFunc );

    static void CancelShutdown( bool boEcho = true );
private:
    CShutdown();

    static void ShutdownTimer( WORD wTimerID, BYTE bCallReason, LPVOID lpData, LPVOID lpUserData );
    
    static bool                     boShuttingDown;
    static CShutdown                m_Instance;
    static SHUTDOWN                 sShutdown;
    static vector< SHUTDOWN_FUNC >  vShutdownFunc;
};

#endif // !defined(AFX_SHUTDOWN_H__5287585B_799D_11D2_844C_00E02922FA40__INCLUDED_)
