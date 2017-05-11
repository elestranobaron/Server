// ************************************************************************
// ***                                                                  ***
//      File Name: Autolock.cpp
//      Project:   The 4th Coming
//      Creation:  Friday, September 24, 1999
//      Author:    Ben Thomas (TH)
// ***                                                                  ***
// ************************************************************************
// *** Copyright (c) 1997-1999 Vircom. All rights reserved.             ***

#include "stdafx.h"
#include "Autolock.h"

//*********************************************************************************
Autolock::Autolock
/**********************************************************************************
 * Constructor, Enter the critical section
 */
(
 CRITICAL_SECTION *cs           // The Critical Section to lock (unlock).
)
//*********************************************************************************
{
	m_cs = cs; // Remember the Critical section, needed for the destructor.
	EnterCriticalSection(m_cs);
}

//*********************************************************************************
Autolock::~Autolock( void )
/**********************************************************************************
 * Destructor, Leave the Critical Section when the the instance goes out of scope.
 */
{
	LeaveCriticalSection(m_cs);
}