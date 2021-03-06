#pragma hdrstop
#include <NPC.H>

#include "Annabelle.h"
#include "Asarr.H"
#include "DorkenRotsmell.h"
#include "Dunikus.h"
#include "Jarko.h"
#include "Karahn.h"
#include "LanceSilversmith.h"
#include "Lantalir.h"
#include "LighthavenSamaritan.h"
#include "Lyria.H"
#include "Mhorgwloth.h"
#include "Mirandul.H"
#include "NPCGoblinScout.h"
#include "NPCGoblinWarrior.h"
#include "OldHermit.h"
#include "RenegadeOrcLeader.h"
#include "SebanForgelot.h"
#include "Totak.H"
#include "WindhowlSamaritan.h"
#include "Yrian.h"

// NPC object definitions.

Annabelle                               ANNABELLE;
Asarr                                   ASARR;
DorkenRotsmell                          DORKENROTSMELL;
Dunikus                                 DUNIKUS;
Jarko                                   JARKO;
Karahn                                  KARAHN;
LanceSilversmith                        LANCESILVERSMITH;
Lantalir                                LANTALIR;
LighthavenSamaritan                     LIGHTHAVENSAMARITAN;
Lyria                                   LYRIA;
Mhorgwloth                              MHORGWLOTH;
Mirandul                                MIRANDUL;
NPCGoblinScout                          NPCGOBLINSCOUT;
NPCGoblinWarrior                        NPCGOBLINWARRIOR;
OldHermit                               OLDHERMIT;
RenegadeOrcLeader                       RENEGADEORCLEADER;
SebanForgelot                           SEBANFORGELOT;
Totak                                   TOTAK;
WindhowlSamaritan                       WINDHOWLSAMARITAN;
Yrian                                   YRIAN;

// NPC registration.

INIT_NPC_DATA

    REGISTER_NPC( ANNABELLE )
    REGISTER_NPC( ASARR )
    REGISTER_NPC( DORKENROTSMELL )
    REGISTER_NPC( DUNIKUS )
    REGISTER_NPC( JARKO )
    REGISTER_NPC( KARAHN )
    REGISTER_NPC( LANCESILVERSMITH )
    REGISTER_NPC( LANTALIR )
    REGISTER_NPC( LIGHTHAVENSAMARITAN )
    REGISTER_NPC( LYRIA )
    REGISTER_NPC( MHORGWLOTH )
    REGISTER_NPC( MIRANDUL )
    REGISTER_NPC( NPCGOBLINSCOUT )
    REGISTER_NPC( NPCGOBLINWARRIOR )
    REGISTER_NPC( OLDHERMIT )
    REGISTER_NPC( RENEGADEORCLEADER )
    REGISTER_NPC( SEBANFORGELOT )
    REGISTER_NPC( TOTAK )
    REGISTER_NPC( WINDHOWLSAMARITAN )
    REGISTER_NPC( YRIAN )

END_INIT_NPC_DATA

// NPC creation.

INIT_NPC_CREATION

    CREATE_NPC( ANNABELLE )
    CREATE_NPC( ASARR )
    CREATE_NPC( DORKENROTSMELL )
    CREATE_NPC( DUNIKUS )
    CREATE_NPC( JARKO )
    CREATE_NPC( KARAHN )
    CREATE_NPC( LANCESILVERSMITH )
    CREATE_NPC( LANTALIR )
    CREATE_NPC( LIGHTHAVENSAMARITAN )
    CREATE_NPC( LYRIA )
    CREATE_NPC( MHORGWLOTH )
    CREATE_NPC( MIRANDUL )
    CREATE_NPC( NPCGOBLINSCOUT )
    CREATE_NPC( NPCGOBLINWARRIOR )
    CREATE_NPC( OLDHERMIT )
    CREATE_NPC( RENEGADEORCLEADER )
    CREATE_NPC( SEBANFORGELOT )
    CREATE_NPC( TOTAK )
    CREATE_NPC( WINDHOWLSAMARITAN )
    CREATE_NPC( YRIAN )

END_INIT_NPC_CREATION
