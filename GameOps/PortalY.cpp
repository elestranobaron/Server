#pragma hdrstop
#include "PortalY.h"

PortalY::PortalY()
{}

PortalY::~PortalY()
{}

extern NPCstructure::NPC IslandPortalNPC;

void PortalY::Create( ){
    npc = IslandPortalNPC;
    SET_NPC_NAME(  "[7396]A shimmering portal" );
    npc.InitialPos.X = 0;
    npc.InitialPos.Y = 0;
    npc.InitialPos.world = 0;
}
void PortalY::OnAttacked( UNIT_FUNC_PROTOTYPE ){
}



void PortalY::OnInitialise( UNIT_FUNC_PROTOTYPE ){
	NPCstructure::OnInitialise( UNIT_FUNC_PARAM );
	WorldPos wlPos = { 0,0,0 };
	self->SetDestination( wlPos );
	self->Do( nothing );
	self->SetCanMove( FALSE );
}

void PortalY::OnTalk( UNIT_FUNC_PROTOTYPE )
{
InitTalk

Begin
""
IF(CheckGlobalFlag(__GLOBAL_FLAG_DYNAMIC_PORTAL_Y) != 0)
	IF (IsInRange(4))
		UseC						  
		BYTE bPositionWorld = (dfGlobalFlags.ViewFlag( __GLOBAL_FLAG_DYNAMIC_PORTAL_Y) & 0xFF);
		WORD wPositionY = (dfGlobalFlags.ViewFlag( __GLOBAL_FLAG_DYNAMIC_PORTAL_Y) & 0xFFF00) >> 8;
		WORD wPositionX = (dfGlobalFlags.ViewFlag( __GLOBAL_FLAG_DYNAMIC_PORTAL_Y) & 0xFFF00000) >> 20;
		TELEPORT( wPositionX, wPositionY, bPositionWorld)
		IF(CheckGlobalFlag(__GLOBAL_FLAG_DYNAMIC_PORTAL_Y_GP) > 0) 
			GiveGold(CheckGlobalFlag(__GLOBAL_FLAG_DYNAMIC_PORTAL_Y_GP))  	
		ENDIF
		IF(CheckGlobalFlag(__GLOBAL_FLAG_DYNAMIC_PORTAL_Y_XP) > 0) 
			GiveXP(CheckGlobalFlag(__GLOBAL_FLAG_DYNAMIC_PORTAL_Y_XP))  
			PRIVATE_SYSTEM_MESSAGE(FORMAT(INTL( 7350, "You've been awarded %u experience points!"), CheckGlobalFlag(__GLOBAL_FLAG_DYNAMIC_PORTAL_Y_XP)))
		ENDIF 
	ELSE
		PRIVATE_SYSTEM_MESSAGE(INTL( 7349, "You must step closer to the portal to activate it."))
	ENDIF
ELSE
	IF (IsInRange(4))
		UseC
		BYTE bPositionWorld = (target->ViewFlag(__FLAG_DEATH_LOCATION) & 0xFF);
		WORD wPositionY = (target->ViewFlag(__FLAG_DEATH_LOCATION) & 0xFFF00) >> 8;
		WORD wPositionX = (target->ViewFlag(__FLAG_DEATH_LOCATION) & 0xFFF00000) >> 20;
		IF(target->ViewFlag(__FLAG_DEATH_LOCATION) != 0)
			TELEPORT( wPositionX, wPositionY, bPositionWorld)
		ELSE
			TELEPORT(2941, 1062, 0)
		ENDIF
	ELSE
		PRIVATE_SYSTEM_MESSAGE(INTL( 7349, "You must step closer to the portal to activate it."))
	ENDIF
ENDIF
BREAK

Default
INTL( 7353, "This is a bug, please report it.")

EndTalk

}