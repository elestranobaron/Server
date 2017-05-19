#include "Lock.h"
#include <map>

class CThreadMonitor : public CLock{
public:
	typedef std::map<DWORD, std::string> ThreadList;
	typedef std::map<DWORD, std::string>::iterator ThreadListIterator;

	static CThreadMonitor& GetInstance();
	void RegisterThread(std::string sThreadName);
	void UnregisterThread();
	bool GetThreadName(DWORD dwThreadID, std::string &sThreadName);
	void GetRunningThreadsList(ThreadList &containerForListOfThreads);
private:
	ThreadList runningThreadsMap;
	CThreadMonitor();
};

class CAutoThreadMonitor {
public:
	CAutoThreadMonitor(std::string sThreadName);
	~CAutoThreadMonitor();
};