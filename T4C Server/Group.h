#if !defined(AFX_GROUP_H__2BEF7B41_FCC5_11D2_84F1_00E02922FA40__INCLUDED_)
#define AFX_GROUP_H__2BEF7B41_FCC5_11D2_84F1_00E02922FA40__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#include <set>
#include <vector>
#include "Lock.h"

#pragma warning( disable : 4786 )

class Character;
class __declspec( dllexport ) Group : public CLock
{
public:
	virtual ~Group();

    static  Group *CreateGroup( Character *lpLeader );

    void    DistributeKillXP( Character *lpKiller, __int64 hyXP );
    void    DistributeKillGold( Character *lpKiller, DWORD dwGold );

    void    DistributeGold( Character *lpGiver, DWORD dwGold );

    bool    Invite ( Character *lpSource, Character *lpCharacter );
    void    Dismiss( Character *lpCharacter );
    void    Dismiss( DWORD dwID );
    bool    Join   ( Character *lpCharacter );

    bool    IsGroupMember( Character *lpCharacter );

    void       GetGroupMembers( std::vector< Character * > &vMembers );
    Character *GetLeader( void );

    void    SendGroupMembers( Character *receiver );

    void    SendHpUpdate( Character *source );

    void    UpdateGroupListing( void );

    void    ToggleAutoSplit( bool newState );

private:
    // Private functions
    void    GetRangeGroupMembers( Character *lpCentralMember, std::vector< Character * > &vMembers );
    
    void    UpdateInviteListing( void );
    void    SendDisbandNotification( void );

	Group( Character *lpGroupLeader );
    void operator delete( void *lpData );

    // Attributes
    Character *            lpGroupLeader;

    std::set< Character *> cGroupMembers;
    std::set< Character *> cInviteList;
    bool                   boAutoShare;
};

#endif // !defined(AFX_GROUP_H__2BEF7B41_FCC5_11D2_84F1_00E02922FA40__INCLUDED_)
