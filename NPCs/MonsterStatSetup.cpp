#include <NPCStructure.h>
#pragma hdrstop
#include <DLLCreatures.h>

NPCstructure::NPC GeenaNPC; 
NPCstructure::NPC KilhiamNPC;
NPCstructure::NPC MoonrockNPC; 
NPCstructure::NPC FaliNPC;
NPCstructure::NPC Lord_Kirlor;               
NPCstructure::NPC MurmuntagDestroyNPC;       
NPCstructure::NPC Nobleman;                  
NPCstructure::NPC DragonNPC;                 
NPCstructure::NPC DelvarIrongripNPC;         
NPCstructure::NPC AraknorNPC;                
NPCstructure::NPC Female_NPC;                
NPCstructure::NPC ShadowNPC;                 
NPCstructure::NPC Guard_One;                 
NPCstructure::NPC Priest;                    
NPCstructure::NPC Peasant;                   
NPCstructure::NPC Mage;                      
NPCstructure::NPC _Pig;                      
NPCstructure::NPC Balork;                    
NPCstructure::NPC OrtanalasNPC;                   
NPCstructure::NPC ShopKeeper;                
NPCstructure::NPC UranosNPC;
NPCstructure::NPC EdgarNPC;
NPCstructure::NPC IsulgurNPC; 
NPCstructure::NPC MarkamNPC; 
NPCstructure::NPC MarnecSunimNPC; 
NPCstructure::NPC KalastorNPC; 
NPCstructure::NPC HalamNPC; 
NPCstructure::NPC JalusNPC; 


void CreateNPC( void );

INIT_MONSTER_STAT_SETUP

SET_MONSTER( JalusNPC )
MOB_NPC_APPEARANCE              ( PUPPET )
MOB_AGRESSIVNESS                ( -100 )
MOB_CLAN                        ( LIGHTHAVEN )
MOB_LEVEL                       ( 100 )
MOB_HP                          ( 1000000 )
MOB_DODGE_SKILL                 ( 65535 )
MOB_AC                          ( 1000000 )
MOB_XP_PER_HIT                  ( 0 )
MOB_XP_DEATH                    ( 0 )
MOB_STR                         ( 20 )
MOB_DEX                         ( 24 )
MOB_END                         ( 22 )
MOB_INT                         ( 20 )
MOB_WIS                         ( 21 )
MOB_WIL                         ( 25 )
MOB_LCK                         ( 22 )               

MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 5000 )
MOB_WATER_RESIST      ( 5000 )
MOB_AIR_RESIST        ( 5000 )
MOB_EARTH_RESIST      ( 5000 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 5000 )

MOB_CREATE_PHYSICAL_ATTACK               
MOB_ATTACK_SKILL        ( 250 )
MOB_ATTACK_DMG_ROLL   (	"1d23+16" )
MOB_ATTACK_PERCENTAGE   ( 100 )
MOB_DRESS_BODY ( BODY_CLOTH1 )
MOB_DRESS_FEET ( LEATHER_BOOTS )
MOB_DRESS_LEGS ( LEG_CLOTH1 )
// MOB_DRESS_WEAPON( DAGGER ) 
// MOB_DRESS_GLOVES
// MOB_DRESS_HELM
// MOB_DRESS_SHIELD
// MOB_DRESS_CAPE

SET_MONSTER( HalamNPC )
MOB_NPC_APPEARANCE              ( PUPPET )
MOB_AGRESSIVNESS                ( -100 )
MOB_CLAN                        ( LIGHTHAVEN )
MOB_LEVEL                       ( 100 )
MOB_HP                          ( 1000000 )
MOB_DODGE_SKILL                 ( 65535 )
MOB_AC                          ( 1000000 )
MOB_XP_PER_HIT                  ( 0 )
MOB_XP_DEATH                    ( 0 )
MOB_STR                         ( 20 )
MOB_DEX                         ( 24 )
MOB_END                         ( 22 )
MOB_INT                         ( 20 )
MOB_WIS                         ( 21 )
MOB_WIL                         ( 25 )
MOB_LCK                         ( 22 )               

MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 5000 )
MOB_WATER_RESIST      ( 5000 )
MOB_AIR_RESIST        ( 5000 )
MOB_EARTH_RESIST      ( 5000 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 5000 )

MOB_CREATE_PHYSICAL_ATTACK               
MOB_ATTACK_SKILL        ( 250 )
MOB_ATTACK_DMG_ROLL   (	"1d23+16" )
MOB_ATTACK_PERCENTAGE   ( 100 )
MOB_DRESS_BODY ( BODY_CLOTH1 )
MOB_DRESS_FEET ( LEATHER_BOOTS )
MOB_DRESS_LEGS ( LEG_CLOTH1 )
// MOB_DRESS_WEAPON( DAGGER ) 
// MOB_DRESS_GLOVES
// MOB_DRESS_HELM
// MOB_DRESS_SHIELD
// MOB_DRESS_CAPE

SET_MONSTER( KalastorNPC )
MOB_NPC_APPEARANCE              ( PUPPET )
MOB_AGRESSIVNESS                ( -100 )
MOB_CLAN                        ( LIGHTHAVEN )
MOB_LEVEL                       ( 100 )
MOB_HP                          ( 1000000 )
MOB_DODGE_SKILL                 ( 65535 )
MOB_AC                          ( 1000000 )
MOB_XP_PER_HIT                  ( 0 )
MOB_XP_DEATH                    ( 0 )
MOB_STR                         ( 20 )
MOB_DEX                         ( 24 )
MOB_END                         ( 22 )
MOB_INT                         ( 20 )
MOB_WIS                         ( 21 )
MOB_WIL                         ( 25 )
MOB_LCK                         ( 22 )               

MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 5000 )
MOB_WATER_RESIST      ( 5000 )
MOB_AIR_RESIST        ( 5000 )
MOB_EARTH_RESIST      ( 5000 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 5000 )

MOB_CREATE_PHYSICAL_ATTACK               
MOB_ATTACK_SKILL        ( 250 )
MOB_ATTACK_DMG_ROLL   (	"1d23+16" )
MOB_ATTACK_PERCENTAGE   ( 100 )
MOB_DRESS_BODY ( BODY_CLOTH1 )
MOB_DRESS_FEET ( LEATHER_BOOTS )
MOB_DRESS_LEGS ( LEG_CLOTH1 )
MOB_DRESS_WEAPON( DAGGER ) 
// MOB_DRESS_GLOVES
// MOB_DRESS_HELM
// MOB_DRESS_SHIELD
// MOB_DRESS_CAPE

SET_MONSTER( MarnecSunimNPC )
MOB_NPC_APPEARANCE              ( PUPPET )
MOB_AGRESSIVNESS                ( -100 )
MOB_CLAN                        ( LIGHTHAVEN )
MOB_LEVEL                       ( 100 )
MOB_HP                          ( 1000000 )
MOB_DODGE_SKILL                 ( 65535 )
MOB_AC                          ( 1000000 )
MOB_XP_PER_HIT                  ( 0 )
MOB_XP_DEATH                    ( 0 )
MOB_STR                         ( 20 )
MOB_DEX                         ( 24 )
MOB_END                         ( 22 )
MOB_INT                         ( 20 )
MOB_WIS                         ( 21 )
MOB_WIL                         ( 25 )
MOB_LCK                         ( 22 )               

MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 5000 )
MOB_WATER_RESIST      ( 5000 )
MOB_AIR_RESIST        ( 5000 )
MOB_EARTH_RESIST      ( 5000 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 5000 )

MOB_CREATE_PHYSICAL_ATTACK               
MOB_ATTACK_SKILL        ( 250 )
MOB_ATTACK_DMG_ROLL   (	"1d23+16" )
MOB_ATTACK_PERCENTAGE   ( 100 )
MOB_DRESS_BODY ( BODY_CLOTH1 )
MOB_DRESS_FEET ( LEATHER_BOOTS )
// MOB_DRESS_GLOVES
//MOB_DRESS_HELM
MOB_DRESS_LEGS ( LEG_CLOTH1 )
// MOB_DRESS_WEAPON
// MOB_DRESS_SHIELD
// MOB_DRESS_CAPE

SET_MONSTER( MarkamNPC )
MOB_NPC_APPEARANCE              ( PUPPET )
MOB_AGRESSIVNESS                ( -100 )
MOB_CLAN                        ( LIGHTHAVEN )
MOB_LEVEL                       ( 100 )
MOB_HP                          ( 1000000 )
MOB_DODGE_SKILL                 ( 65535 )
MOB_AC                          ( 1000000 )
MOB_XP_PER_HIT                  ( 0 )
MOB_XP_DEATH                    ( 0 )
MOB_STR                         ( 20 )
MOB_DEX                         ( 24 )
MOB_END                         ( 22 )
MOB_INT                         ( 20 )
MOB_WIS                         ( 21 )
MOB_WIL                         ( 25 )
MOB_LCK                         ( 22 )               

MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 5000 )
MOB_WATER_RESIST      ( 5000 )
MOB_AIR_RESIST        ( 5000 )
MOB_EARTH_RESIST      ( 5000 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 5000 )

MOB_CREATE_PHYSICAL_ATTACK               
MOB_ATTACK_SKILL        ( 250 )
MOB_ATTACK_DMG_ROLL   (	"1d23+16" )
MOB_ATTACK_PERCENTAGE   ( 100 )
MOB_DRESS_BODY ( CHAIN_BODY ) 
MOB_DRESS_FEET ( PLATE_BOOT )
MOB_DRESS_GLOVES ( LEATHER_GLOVE ) 
// MOB_DRESS_HELM ( CHAIN_COIF )
MOB_DRESS_LEGS ( LEATHER_PANTS )
// MOB_DRESS_WEAPON
// MOB_DRESS_SHIELD
// MOB_DRESS_CAPE

SET_MONSTER( IsulgurNPC )
MOB_NPC_APPEARANCE              ( PUPPET )
MOB_AGRESSIVNESS                ( -100 )
MOB_CLAN                        ( LIGHTHAVEN )
MOB_LEVEL                       ( 100 )
MOB_HP                          ( 1000000 )
MOB_DODGE_SKILL                 ( 65535 )
MOB_AC                          ( 1000000 )
MOB_XP_PER_HIT                  ( 0 )
MOB_XP_DEATH                    ( 0 )
MOB_STR                         ( 20 )
MOB_DEX                         ( 24 )
MOB_END                         ( 22 )
MOB_INT                         ( 20 )
MOB_WIS                         ( 21 )
MOB_WIL                         ( 25 )
MOB_LCK                         ( 22 )               

MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 5000 )
MOB_WATER_RESIST      ( 5000 )
MOB_AIR_RESIST        ( 5000 )
MOB_EARTH_RESIST      ( 5000 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 5000 )

MOB_CREATE_PHYSICAL_ATTACK               
MOB_ATTACK_SKILL        ( 250 )
MOB_ATTACK_DMG_ROLL   (	"1d23+16" )
MOB_ATTACK_PERCENTAGE   ( 100 )
MOB_DRESS_BODY ( CHAIN_BODY ) 
MOB_DRESS_FEET ( PLATE_BOOT )
MOB_DRESS_GLOVES ( LEATHER_GLOVE ) 
MOB_DRESS_HELM ( CHAIN_COIF )
MOB_DRESS_LEGS ( LEATHER_PANTS )
// MOB_DRESS_WEAPON
// MOB_DRESS_SHIELD
// MOB_DRESS_CAPE

SET_MONSTER( Lord_Kirlor )
MOB_NPC_APPEARANCE              ( PUPPET )
MOB_AGRESSIVNESS                ( -100 )
MOB_CLAN                        ( LIGHTHAVEN )
MOB_LEVEL                       ( 100 )
MOB_HP                          ( 1000000 )
MOB_DODGE_SKILL                 ( 65535 )
MOB_AC                          ( 1000000 )
MOB_XP_PER_HIT                  ( 0 )
MOB_XP_DEATH                    ( 0 )
MOB_STR                         ( 20 )
MOB_DEX                         ( 24 )
MOB_END                         ( 22 )
MOB_INT                         ( 20 )
MOB_WIS                         ( 21 )
MOB_WIL                         ( 25 )
MOB_LCK                         ( 22 )               

MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 5000 )
MOB_WATER_RESIST      ( 5000 )
MOB_AIR_RESIST        ( 5000 )
MOB_EARTH_RESIST      ( 5000 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 5000 )

MOB_CREATE_PHYSICAL_ATTACK               
MOB_ATTACK_SKILL        ( 250 )
MOB_ATTACK_DMG_ROLL   (	"1d23+16" )
MOB_ATTACK_PERCENTAGE   ( 100 )
MOB_DRESS_BODY ( CHAIN_BODY ) 
MOB_DRESS_FEET ( PLATE_BOOT )
MOB_DRESS_GLOVES ( LEATHER_GLOVE) 
MOB_DRESS_HELM ( CHAIN_COIF )
MOB_DRESS_LEGS ( CHAIN_LEGS )
// MOB_DRESS_WEAPON
// MOB_DRESS_SHIELD
MOB_DRESS_CAPE ( REDCAPE )

SET_MONSTER( MurmuntagDestroyNPC )
MOB_NPC_APPEARANCE              ( ORC )   // If it's not that it's NPC_ORC
MOB_AGRESSIVNESS                ( -100 )
MOB_CLAN                        ( LIGHTHAVEN )
MOB_LEVEL                       ( 100 )
MOB_HP                          ( 1000000 )
MOB_DODGE_SKILL                 ( 65535 )
MOB_AC                          ( 1000000 )
MOB_XP_PER_HIT                  ( 0 )
MOB_XP_DEATH                    ( 0 )
MOB_STR                         ( 20 )
MOB_DEX                         ( 24 )
MOB_END                         ( 22 )
MOB_INT                         ( 20 )
MOB_WIS                         ( 21 )
MOB_WIL                         ( 25 )
MOB_LCK                         ( 22 )               

MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 5000 )
MOB_WATER_RESIST      ( 5000 )
MOB_AIR_RESIST        ( 5000 )
MOB_EARTH_RESIST      ( 5000 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 5000 )

MOB_CREATE_PHYSICAL_ATTACK
MOB_ATTACK_SKILL      ( 250 ) 
MOB_ATTACK_DMG_ROLL   (	"1d23+16" )
MOB_ATTACK_PERCENTAGE ( 100 )

SET_MONSTER( DragonNPC )
MOB_NPC_APPEARANCE              ( DRAGON )  
MOB_AGRESSIVNESS                ( -100 )
MOB_CLAN                        ( LIGHTHAVEN )
MOB_LEVEL                       ( 100 )
MOB_HP                          ( 1000000 )
MOB_DODGE_SKILL                 ( 65535 )
MOB_AC                          ( 1000000 )
MOB_XP_PER_HIT                  ( 0 )
MOB_XP_DEATH                    ( 0 )
MOB_STR                         ( 20 )
MOB_DEX                         ( 24 )
MOB_END                         ( 22 )
MOB_INT                         ( 20 )
MOB_WIS                         ( 21 )
MOB_WIL                         ( 10000 )
MOB_LCK                         ( 22 )               
MOB_CAN_ATTACK                  (FALSE)

MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 5000 )
MOB_WATER_RESIST      ( 5000 )
MOB_AIR_RESIST        ( 5000 )
MOB_EARTH_RESIST      ( 5000 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 5000 )

SET_MONSTER( ShopKeeper )
MOB_NPC_APPEARANCE              ( PUPPET ) 
MOB_AGRESSIVNESS                ( -100 )
MOB_CLAN                        ( LIGHTHAVEN )
MOB_LEVEL                       ( 100 )
MOB_HP                          ( 1000000 )
MOB_DODGE_SKILL                 ( 65535 )
MOB_AC                          ( 1000000 )
MOB_XP_PER_HIT                  ( 0 )
MOB_XP_DEATH                    ( 0 )
MOB_STR                         ( 20 )
MOB_DEX                         ( 24 )
MOB_END                         ( 22 )
MOB_INT                         ( 20 )
MOB_WIS                         ( 21 )
MOB_WIL                         ( 25 )
MOB_LCK                         ( 22 )               

MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 5000 )
MOB_WATER_RESIST      ( 5000 )
MOB_AIR_RESIST        ( 5000 )
MOB_EARTH_RESIST      ( 5000 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 5000 )

MOB_CREATE_PHYSICAL_ATTACK               
MOB_ATTACK_SKILL        ( 250 )
MOB_ATTACK_DMG_ROLL   (	"1d23+16" )
MOB_ATTACK_PERCENTAGE   ( 100 )
MOB_DRESS_BODY ( BODY_CLOTH1 )
MOB_DRESS_FEET ( LEATHER_BOOTS )
// MOB_DRESS_GLOVES
//MOB_DRESS_HELM
MOB_DRESS_LEGS ( LEG_CLOTH1 )
// MOB_DRESS_WEAPON
// MOB_DRESS_SHIELD
// MOB_DRESS_CAPE

SET_MONSTER( Balork ) // Boss
MOB_NPC_APPEARANCE              ( DEMON )
MOB_AGRESSIVNESS                ( -100 )
MOB_SPEED                       ( 65, dice( 10, 375 ), 30, dice( 8, 250 ) )
MOB_CLAN                        ( DUNGEON_OF_BALORK )
MOB_LEVEL                       ( 15 )
MOB_HP                          ( 508 )
MOB_DODGE_SKILL                 ( 70 )              
MOB_AC                          ( 7 )
MOB_XP_PER_HIT                  ( 2.66 )
MOB_XP_DEATH                    ( 674.44 )
MOB_MIN_GOLD                    ( 52 )
MOB_MAX_GOLD                    ( 164 )
MOB_STR                         ( 51 )
MOB_DEX                         ( 35 )
MOB_END                         ( 53 )
MOB_INT                         ( 36 )
MOB_WIS                         ( 38 )
MOB_WIL                         ( 56 )
MOB_LCK                         ( 50 )

MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 115 )
MOB_WATER_RESIST      ( 115 )
MOB_AIR_RESIST        ( 115 )
MOB_EARTH_RESIST      ( 115 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 115 )

MOB_CAN_ATTACK                  (TRUE)
MOB_CREATE_PHYSICAL_ATTACK               
MOB_ATTACK_SKILL                ( 190 )
MOB_ATTACK_DMG_ROLL   (	"1d17+12" )
MOB_ATTACK_PERCENTAGE           ( 100 )

MOB_ITEM( __OBJ_LIGHT_HEALING_POTION, 10 )
MOB_ITEM( __OBJ_FLOWING_BLACK_ROBE, 2.5 )

SET_MONSTER( DelvarIrongripNPC )
MOB_NPC_APPEARANCE              ( PUPPET )
MOB_AGRESSIVNESS                ( -100 )
MOB_CLAN                        ( LIGHTHAVEN )
MOB_LEVEL                       ( 100 )
MOB_HP                          ( 1000000 )
MOB_DODGE_SKILL                 ( 65535 )
MOB_AC                          ( 1000000 )
MOB_XP_PER_HIT                  ( 0 )
MOB_XP_DEATH                    ( 0 )
MOB_STR                         ( 20 )
MOB_DEX                         ( 24 )
MOB_END                         ( 22 )
MOB_INT                         ( 20 )
MOB_WIS                         ( 21 )
MOB_WIL                         ( 25 )
MOB_LCK                         ( 22 )               

MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 5000 )
MOB_WATER_RESIST      ( 5000 )
MOB_AIR_RESIST        ( 5000 )
MOB_EARTH_RESIST      ( 5000 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 5000 )

MOB_CREATE_PHYSICAL_ATTACK
MOB_ATTACK_SKILL      ( 250 )
MOB_ATTACK_DMG_ROLL   (	"1d23+16" )
MOB_ATTACK_PERCENTAGE ( 100 )
// MINdam: 17  MAXdam: 36  Average: 26.5 
MOB_DRESS_BODY ( CHAIN_BODY )
MOB_DRESS_FEET ( PLATE_BOOT )
MOB_DRESS_GLOVES ( LEATHER_GLOVE) 
MOB_DRESS_HELM ( CHAIN_COIF )
MOB_DRESS_LEGS ( CHAIN_LEGS )
MOB_DRESS_WEAPON ( BATTLE_SWORD )
MOB_DRESS_SHIELD ( ROMAN_SHIELD )
MOB_DRESS_CAPE ( REDCAPE )

SET_MONSTER( Guard_One )
MOB_NPC_APPEARANCE              ( PUPPET )
MOB_AGRESSIVNESS                ( -100 )
MOB_CLAN                        ( LIGHTHAVEN )
MOB_LEVEL                       ( 100 )
MOB_HP                          ( 1000000 )
MOB_DODGE_SKILL                 ( 65535 )
MOB_AC                          ( 1000000 )
MOB_XP_PER_HIT                  ( 0 )
MOB_XP_DEATH                    ( 0 )
MOB_STR                         ( 20 )
MOB_DEX                         ( 24 )
MOB_END                         ( 22 )
MOB_INT                         ( 20 )
MOB_WIS                         ( 21 )
MOB_WIL                         ( 25 )
MOB_LCK                         ( 22 )               

MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 5000 )
MOB_WATER_RESIST      ( 5000 )
MOB_AIR_RESIST        ( 5000 )
MOB_EARTH_RESIST      ( 5000 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 5000 )

MOB_CREATE_PHYSICAL_ATTACK
MOB_ATTACK_SKILL      ( 250 )
MOB_ATTACK_DMG_ROLL   (	"1d23+16" )
MOB_ATTACK_PERCENTAGE ( 100 )
MOB_DRESS_BODY ( CHAIN_BODY )
MOB_DRESS_FEET ( PLATE_BOOT )
MOB_DRESS_GLOVES ( LEATHER_GLOVE) 
MOB_DRESS_HELM ( CHAIN_COIF )
MOB_DRESS_LEGS ( CHAIN_LEGS )
MOB_DRESS_WEAPON ( BATTLE_SWORD )
MOB_DRESS_SHIELD ( ROMAN_SHIELD )
MOB_DRESS_CAPE ( REDCAPE )

SET_MONSTER( Peasant )
MOB_NPC_APPEARANCE              ( HUMAN_PEASANT )
MOB_AGRESSIVNESS                ( -100 )
MOB_CLAN                        ( LIGHTHAVEN )
MOB_LEVEL                       ( 100 )
MOB_HP                          ( 1000000 )
MOB_DODGE_SKILL                 ( 65535 )
MOB_AC                          ( 1000000 )
MOB_XP_PER_HIT                  ( 0 )
MOB_XP_DEATH                    ( 0 )
MOB_STR                         ( 65 )
MOB_DEX                         ( 63 )
MOB_END                         ( 67 )
MOB_INT                         ( 47 )
MOB_WIS                         ( 87 )
MOB_WIL                         ( 79 )
MOB_LCK                         ( 54 )
MOB_CAN_ATTACK                  (FALSE)

MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 5000 )
MOB_WATER_RESIST      ( 5000 )
MOB_AIR_RESIST        ( 5000 )
MOB_EARTH_RESIST      ( 5000 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 5000 )

SET_MONSTER( Priest )
MOB_NPC_APPEARANCE              ( PUPPET )
MOB_AGRESSIVNESS                ( -100 )
MOB_CLAN                        ( LIGHTHAVEN )
MOB_LEVEL                       ( 100 )
MOB_HP                          ( 1000000 )
MOB_DODGE_SKILL                 ( 65535 )
MOB_AC                          ( 1000000 )
MOB_XP_PER_HIT                  ( 0 )
MOB_XP_DEATH                    ( 0 )
MOB_STR                         ( 20 )
MOB_DEX                         ( 24 )
MOB_END                         ( 22 )
MOB_INT                         ( 20 )
MOB_WIS                         ( 21 )
MOB_WIL                         ( 25 )
MOB_LCK                         ( 22 )               

MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 5000 )
MOB_WATER_RESIST      ( 5000 )
MOB_AIR_RESIST        ( 5000 )
MOB_EARTH_RESIST      ( 5000 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 5000 )

MOB_CREATE_PHYSICAL_ATTACK
MOB_ATTACK_SKILL      ( 250 )
MOB_ATTACK_DMG_ROLL   (	"1d23+16" )
MOB_ATTACK_PERCENTAGE ( 100 )

MOB_DRESS_BODY ( WHITEROBE )
// MOB_DRESS_LEGS ( LEG_CLOTH1 )
MOB_DRESS_FEET ( LEATHER_BOOTS )
// MOB_DRESS_WEAPON ( STAFF1 ) 

SET_MONSTER( Nobleman )
MOB_NPC_APPEARANCE              ( PUPPET )
MOB_AGRESSIVNESS                ( -100 )
MOB_CLAN                        ( LIGHTHAVEN )
MOB_LEVEL                       ( 100 )
MOB_HP                          ( 1000000 )
MOB_DODGE_SKILL                 ( 65535 )
MOB_AC                          ( 1000000 )
MOB_XP_PER_HIT                  ( 0 )
MOB_XP_DEATH                    ( 0 )
MOB_STR                         ( 20 )
MOB_DEX                         ( 24 )
MOB_END                         ( 22 )
MOB_INT                         ( 20 )
MOB_WIS                         ( 21 )
MOB_WIL                         ( 25 )
MOB_LCK                         ( 22 )               

MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 5000 )
MOB_WATER_RESIST      ( 5000 )
MOB_AIR_RESIST        ( 5000 )
MOB_EARTH_RESIST      ( 5000 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 5000 )

MOB_CREATE_PHYSICAL_ATTACK               
MOB_ATTACK_SKILL        ( 250 )
MOB_ATTACK_DMG_ROLL   (	"1d23+16" )
MOB_ATTACK_PERCENTAGE   ( 100 )
MOB_DRESS_BODY ( CHAIN_BODY ) 
MOB_DRESS_FEET ( PLATE_BOOT )
MOB_DRESS_GLOVES ( LEATHER_GLOVE ) 
MOB_DRESS_HELM ( CHAIN_COIF )
MOB_DRESS_LEGS ( LEATHER_PANTS )
// MOB_DRESS_WEAPON
// MOB_DRESS_SHIELD
// MOB_DRESS_CAPE

SET_MONSTER( Female_NPC )
MOB_NPC_APPEARANCE              ( HUMAN_PAYSANNE )
MOB_AGRESSIVNESS                ( -100 )
MOB_CLAN                        ( LIGHTHAVEN )
MOB_LEVEL                       ( 100 )
MOB_HP                          ( 1000000 )
MOB_DODGE_SKILL                 ( 65535 )
MOB_AC                          ( 1000000 )
MOB_XP_PER_HIT                  ( 0 )
MOB_XP_DEATH                    ( 0 )
MOB_STR                         ( 65 )
MOB_DEX                         ( 63 )
MOB_END                         ( 67 )
MOB_INT                         ( 47 )
MOB_WIS                         ( 87 )
MOB_WIL                         ( 79 )
MOB_LCK                         ( 54 )
MOB_CAN_ATTACK                  (FALSE)

MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 5000 )
MOB_WATER_RESIST      ( 5000 )
MOB_AIR_RESIST        ( 5000 )
MOB_EARTH_RESIST      ( 5000 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 5000 )

SET_MONSTER( AraknorNPC )
MOB_NPC_APPEARANCE              ( PUPPET )
MOB_AGRESSIVNESS                ( -100 )
MOB_CLAN                        ( LIGHTHAVEN )
MOB_LEVEL                       ( 100 )
MOB_HP                          ( 1000000 )
MOB_DODGE_SKILL                 ( 65535 )
MOB_AC                          ( 1000000 )
MOB_XP_PER_HIT                  ( 0 )
MOB_XP_DEATH                    ( 0 )
MOB_STR                         ( 20 )
MOB_DEX                         ( 24 )
MOB_END                         ( 22 )
MOB_INT                         ( 20 )
MOB_WIS                         ( 21 )
MOB_WIL                         ( 25 )
MOB_LCK                         ( 22 )               

MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 5000 )
MOB_WATER_RESIST      ( 5000 )
MOB_AIR_RESIST        ( 5000 )
MOB_EARTH_RESIST      ( 5000 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 5000 )

MOB_CREATE_PHYSICAL_ATTACK               
MOB_ATTACK_SKILL        ( 250 )
MOB_ATTACK_DMG_ROLL   (	"1d23+16" )
MOB_ATTACK_PERCENTAGE   ( 100 )
MOB_DRESS_BODY ( NECROMANROBE )
MOB_DRESS_FEET ( BLACKLEATHER_BOOT )
// MOB_DRESS_GLOVES 
MOB_DRESS_HELM ( HORNED_HELMET )
MOB_DRESS_LEGS ( LEATHER_PANTS ) 
// MOB_DRESS_WEAPON
// MOB_DRESS_SHIELD
// MOB_DRESS_CAPE 

SET_MONSTER( Mage )
MOB_NPC_APPEARANCE              ( PUPPET )
MOB_AGRESSIVNESS                ( -100 )
MOB_CLAN                        ( LIGHTHAVEN )
MOB_LEVEL                       ( 100 )
MOB_HP                          ( 1000000 )
MOB_DODGE_SKILL                 ( 65535 )
MOB_AC                          ( 1000000 )
MOB_XP_PER_HIT                  ( 0 )
MOB_XP_DEATH                    ( 0 )
MOB_STR                         ( 20 )
MOB_DEX                         ( 24 )
MOB_END                         ( 22 )
MOB_INT                         ( 20 )
MOB_WIS                         ( 21 )
MOB_WIL                         ( 25 )
MOB_LCK                         ( 22 )               

MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 5000 )
MOB_WATER_RESIST      ( 5000 )
MOB_AIR_RESIST        ( 5000 )
MOB_EARTH_RESIST      ( 5000 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 5000 )

MOB_CREATE_PHYSICAL_ATTACK               
MOB_ATTACK_SKILL        ( 250 )
MOB_ATTACK_DMG_ROLL   (	"1d23+16" )
MOB_ATTACK_PERCENTAGE   ( 100 )
MOB_DRESS_BODY ( NECROMANROBE )
MOB_DRESS_FEET ( BLACKLEATHER_BOOT )
// MOB_DRESS_GLOVES 
// MOB_DRESS_HELM
MOB_DRESS_LEGS ( LEATHER_PANTS ) 
// MOB_DRESS_WEAPON
// MOB_DRESS_SHIELD
// MOB_DRESS_CAPE 

SET_MONSTER( UranosNPC )
MOB_NPC_APPEARANCE              ( PUPPET )
MOB_AGRESSIVNESS                ( -100 )
MOB_CLAN                        ( LIGHTHAVEN )
MOB_LEVEL                       ( 100 )
MOB_HP                          ( 1000000 )
MOB_DODGE_SKILL                 ( 65535 )
MOB_AC                          ( 1000000 )
MOB_XP_PER_HIT                  ( 0 )
MOB_XP_DEATH                    ( 0 )
MOB_STR                         ( 20 )
MOB_DEX                         ( 24 )
MOB_END                         ( 22 )
MOB_INT                         ( 20 )
MOB_WIS                         ( 21 )
MOB_WIL                         ( 25 )
MOB_LCK                         ( 22 )               

MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 5000 )
MOB_WATER_RESIST      ( 5000 )
MOB_AIR_RESIST        ( 5000 )
MOB_EARTH_RESIST      ( 5000 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 5000 )

MOB_CREATE_PHYSICAL_ATTACK               
MOB_ATTACK_SKILL        ( 250 )
MOB_ATTACK_DMG_ROLL   (	"1d23+16" )
MOB_ATTACK_PERCENTAGE   ( 100 )
MOB_DRESS_BODY ( NECROMANROBE )
MOB_DRESS_FEET ( BLACKLEATHER_BOOT )
MOB_DRESS_GLOVES  ( LEATHER_GLOVE )
// MOB_DRESS_HELM 
MOB_DRESS_LEGS ( LEATHER_PANTS ) 
// MOB_DRESS_WEAPON
// MOB_DRESS_SHIELD
MOB_DRESS_CAPE ( REDCAPE )

SET_MONSTER( _Pig )
MOB_NPC_APPEARANCE              ( PIG )
MOB_AGRESSIVNESS                ( -100 )
MOB_CLAN                        ( LIGHTHAVEN )
MOB_LEVEL                       ( 10 )
MOB_HP                          ( 300 )
MOB_DODGE_SKILL                 ( 30 )
MOB_AC                          ( 2 )
MOB_XP_PER_HIT                  ( 0 )
MOB_XP_DEATH                    ( 0 )
MOB_MIN_GOLD                    ( 0 )
MOB_MAX_GOLD                    ( 0 )
MOB_STR                         ( 20 )
MOB_DEX                         ( 25 )
MOB_END                         ( 20 )
MOB_INT                         ( 55 )
MOB_WIS                         ( 55 )
MOB_WIL                         ( 55 )
MOB_LCK                         ( 55 )
MOB_CAN_ATTACK                  (FALSE)
MOB_DEATH_FLAG        ( __FLAG_COUNTER_PIG_KILLED, 1, TRUE)
MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 75 )
MOB_WATER_RESIST     ( 75 )
MOB_AIR_RESIST        ( 75 )
MOB_EARTH_RESIST      ( 75 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 75 )

SET_MONSTER( ShadowNPC )
MOB_NPC_APPEARANCE              ( PUPPET )
MOB_AGRESSIVNESS                ( -100 )
MOB_CLAN                        ( LIGHTHAVEN )
MOB_LEVEL                       ( 100 )
MOB_HP                          ( 1000000 )
MOB_DODGE_SKILL                 ( 65535 )
MOB_AC                          ( 1000000 )
MOB_XP_PER_HIT                  ( 0 )
MOB_XP_DEATH                    ( 0 )
MOB_STR                         ( 65 )
MOB_DEX                         ( 65 )
MOB_END                         ( 65 )
MOB_INT                         ( 65 )
MOB_WIS                         ( 65 )
MOB_WIL                         ( 65 )
MOB_LCK                         ( 65 )

MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 5000 )
MOB_WATER_RESIST      ( 5000 )
MOB_AIR_RESIST        ( 5000 )
MOB_EARTH_RESIST      ( 5000 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 5000 )

MOB_CREATE_PHYSICAL_ATTACK               
MOB_ATTACK_SKILL        ( 250 )
MOB_ATTACK_DMG_ROLL   (	"1d23+16" )
MOB_ATTACK_PERCENTAGE   ( 100 )
MOB_DRESS_BODY ( LEATHER_ARMOR )
MOB_DRESS_FEET ( LEATHER_BOOTS )
MOB_DRESS_GLOVES ( LEATHER_GLOVE )
// MOB_DRESS_HELM 
MOB_DRESS_LEGS ( STUDDEDLEG )
MOB_DRESS_WEAPON ( DAGGER )
// MOB_DRESS_SHIELD
MOB_DRESS_CAPE ( REDCAPE )

SET_MONSTER( OrtanalasNPC )
MOB_NPC_APPEARANCE	( PUPPET )
MOB_AGRESSIVNESS		( -100 )
MOB_CLAN					( LIGHTHAVEN )
MOB_LEVEL				( 100 )
MOB_HP					( 1000000 )
MOB_DODGE_SKILL		( 65535 )
MOB_AC					( 1000000 )
MOB_XP_PER_HIT			( 0 )
MOB_XP_DEATH         ( 0 )
MOB_STR              ( 65 )
MOB_DEX              ( 63 )
MOB_END              ( 67 )
MOB_INT              ( 47 )
MOB_WIS              ( 87 )
MOB_WIL              ( 79 )
MOB_LCK              ( 54 )

MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 5000 )
MOB_WATER_RESIST      ( 5000 )
MOB_AIR_RESIST        ( 5000 )
MOB_EARTH_RESIST      ( 5000 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 5000 )

MOB_CREATE_PHYSICAL_ATTACK               
MOB_ATTACK_SKILL        ( 250 )
MOB_ATTACK_DMG_ROLL   (	"1d23+16" )
MOB_ATTACK_PERCENTAGE   ( 100 )
MOB_DRESS_BODY ( LEATHER_ARMOR )
MOB_DRESS_FEET ( LEATHER_BOOTS )
MOB_DRESS_GLOVES ( LEATHER_GLOVE )
// MOB_DRESS_HELM 
MOB_DRESS_LEGS ( STUDDEDLEG )
MOB_DRESS_WEAPON ( BATTLE_SWORD )
MOB_DRESS_SHIELD ( ROMAN_SHIELD )
// MOB_DRESS_CAPE ( REDCAPE )

SET_MONSTER           ( EdgarNPC )
MOB_NAME              ( "Edgar" )
MOB_SPEED             ( 65, dice( 10, 300 ), 35, dice( 1, 2000 ) )
MOB_AGRESSIVNESS      ( -100 ) 
MOB_NPC_APPEARANCE    ( PUPPET ) 
MOB_CLAN              ( LIGHTHAVEN ) 
MOB_HP                ( 84 )
MOB_DODGE_SKILL       ( 30 )
MOB_AC                ( 2 )
MOB_LEVEL             ( 5 )
MOB_XP_PER_HIT        ( 1.78 )
MOB_XP_DEATH          ( 80.00 )
MOB_MIN_GOLD          ( 8 )
MOB_MAX_GOLD          ( 27 )
MOB_STR               ( 20 )
MOB_DEX               ( 19 )
MOB_END               ( 19 )
MOB_INT               ( 21 )
MOB_WIS               ( 19 )
MOB_WIL               ( 19 )
MOB_LCK               ( 16 )

MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 86 )
MOB_WATER_RESIST      ( 86 )
MOB_AIR_RESIST        ( 86 )
MOB_EARTH_RESIST      ( 86 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 57 )

MOB_CREATE_PHYSICAL_ATTACK
MOB_ATTACK_SKILL      ( 70 )
MOB_ATTACK_DMG_ROLL   (	"1d8+4" )
MOB_ATTACK_PERCENTAGE ( 100 )
// MINdam: 6  MAXdam: 12 

MOB_DRESS_BODY ( BODY_CLOTH1 )
MOB_DRESS_LEGS ( LEG_CLOTH1 )
MOB_DRESS_FEET ( LEATHER_BOOTS )

MOB_ITEM( __OBJ_TORCH, 30 )
MOB_ITEM( __OBJ_IRON_KEY, 1 ) 

SET_MONSTER( FaliNPC )
MOB_NPC_APPEARANCE	( FEMALE_PUPPET )
MOB_AGRESSIVNESS		( -100 )
MOB_CLAN					( LIGHTHAVEN )
MOB_LEVEL				( 100 )
MOB_HP					( 1000000 )
MOB_DODGE_SKILL		( 65535 )
MOB_AC					( 1000000 )
MOB_XP_PER_HIT			( 0 )
MOB_XP_DEATH			( 0 )
MOB_STR					( 65 )
MOB_DEX					( 63 )
MOB_END					( 67 )
MOB_INT					( 47 )
MOB_WIS					( 87 )
MOB_WIL					( 79 )
MOB_LCK					( 54 )
MOB_CAN_ATTACK			(FALSE)

MOB_FIRE_POWER			( 100 )
MOB_WATER_POWER		( 100 )
MOB_AIR_POWER			( 100 )
MOB_EARTH_POWER		( 100 )
MOB_LIGHT_POWER		( 100 )
MOB_DARK_POWER			( 100 )

MOB_FIRE_RESIST		( 5000 )
MOB_WATER_RESIST		( 5000 )
MOB_AIR_RESIST			( 5000 )
MOB_EARTH_RESIST		( 5000 )
MOB_LIGHT_RESIST		( 5000 )
MOB_DARK_RESIST		( 5000 )

MOB_DRESS_BODY ( BODY_CLOTH1 )
MOB_DRESS_LEGS ( LEG_CLOTH1 )
MOB_DRESS_FEET ( LEATHER_BOOTS )

SET_MONSTER( MoonrockNPC) 
MOB_NPC_APPEARANCE	( FEMALE_PUPPET )
MOB_AGRESSIVNESS		( -100 )
MOB_CLAN					( LIGHTHAVEN )
MOB_LEVEL				( 100 )
MOB_HP					( 1000000 )
MOB_DODGE_SKILL		( 65535 )
MOB_AC					( 1000000 )
MOB_XP_PER_HIT			( 0 )
MOB_XP_DEATH         ( 0 )
MOB_STR              ( 65 )
MOB_DEX              ( 63 )
MOB_END              ( 67 )
MOB_INT              ( 47 )
MOB_WIS              ( 87 )
MOB_WIL              ( 79 )
MOB_LCK              ( 54 )
MOB_CAN_ATTACK       (FALSE)

MOB_FIRE_POWER			( 100 )
MOB_WATER_POWER		( 100 )
MOB_AIR_POWER			( 100 )
MOB_EARTH_POWER		( 100 )
MOB_LIGHT_POWER		( 100 )
MOB_DARK_POWER			( 100 )

MOB_FIRE_RESIST		( 5000 )
MOB_WATER_RESIST		( 5000 )
MOB_AIR_RESIST			( 5000 )
MOB_EARTH_RESIST		( 5000 )
MOB_LIGHT_RESIST		( 5000 )
MOB_DARK_RESIST		( 5000 )

MOB_DRESS_BODY ( WHITEROBE )
// MOB_DRESS_LEGS ( LEG_CLOTH1 )
MOB_DRESS_FEET ( LEATHER_BOOTS )
MOB_DRESS_WEAPON ( STAFF1 ) 

SET_MONSTER( GeenaNPC) 
MOB_NPC_APPEARANCE	( FEMALE_PUPPET )
MOB_AGRESSIVNESS		( -100 )
MOB_CLAN					( LIGHTHAVEN )
MOB_LEVEL				( 100 )
MOB_HP					( 1000000 )
MOB_DODGE_SKILL		( 65535 )
MOB_AC					( 1000000 )
MOB_XP_PER_HIT			( 0 )
MOB_XP_DEATH         ( 0 )
MOB_STR              ( 65 )
MOB_DEX              ( 63 )
MOB_END              ( 67 )
MOB_INT              ( 47 )
MOB_WIS              ( 87 )
MOB_WIL              ( 79 )
MOB_LCK              ( 54 )
MOB_CAN_ATTACK       (FALSE)

MOB_FIRE_POWER			( 100 )
MOB_WATER_POWER		( 100 )
MOB_AIR_POWER			( 100 )
MOB_EARTH_POWER		( 100 )
MOB_LIGHT_POWER		( 100 )
MOB_DARK_POWER			( 100 )

MOB_FIRE_RESIST		( 5000 )
MOB_WATER_RESIST		( 5000 )
MOB_AIR_RESIST			( 5000 )
MOB_EARTH_RESIST		( 5000 )
MOB_LIGHT_RESIST		( 5000 )
MOB_DARK_RESIST		( 5000 )
MOB_DRESS_BODY ( BODY_CLOTH1 )
MOB_DRESS_LEGS ( LEG_CLOTH1 )
MOB_DRESS_FEET ( LEATHER_BOOTS )

SET_MONSTER( KilhiamNPC )
MOB_NPC_APPEARANCE	( FEMALE_PUPPET )
MOB_AGRESSIVNESS		( -100 )
MOB_CLAN					( LIGHTHAVEN )
MOB_LEVEL				( 100 )
MOB_HP					( 1000000 )
MOB_DODGE_SKILL		( 65535 )
MOB_AC					( 1000000 )
MOB_XP_PER_HIT			( 0 )
MOB_XP_DEATH			( 0 )
MOB_STR					( 65 )
MOB_DEX					( 63 )
MOB_END					( 67 )
MOB_INT					( 47 )
MOB_WIS					( 87 )
MOB_WIL					( 79 )
MOB_LCK					( 54 )
MOB_CAN_ATTACK			(FALSE)

MOB_FIRE_POWER			( 100 )
MOB_WATER_POWER		( 100 )
MOB_AIR_POWER			( 100 )
MOB_EARTH_POWER		( 100 )
MOB_LIGHT_POWER		( 100 )
MOB_DARK_POWER			( 100 )

MOB_FIRE_RESIST		( 5000 )
MOB_WATER_RESIST		( 5000 )
MOB_AIR_RESIST			( 5000 )
MOB_EARTH_RESIST		( 5000 )
MOB_LIGHT_RESIST		( 5000 )
MOB_DARK_RESIST		( 5000 )

MOB_DRESS_BODY ( WHITEROBE )
// MOB_DRESS_LEGS ( LEG_CLOTH1 )
MOB_DRESS_FEET ( LEATHER_BOOTS )
MOB_DRESS_WEAPON ( STAFF3 ) 

	CreateNPC();
CLOSE_MONSTER_STAT_SETUP

void MonsterStatDestroy(){
}
 
