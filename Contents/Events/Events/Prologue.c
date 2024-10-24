#include "gbafe.h"

static const struct UnitDefinition UnitDef_Ally[] = {
	{
		.charIndex = CHARACTER_EIRIKA,
		.classIndex = CLASS_EIRIKA_LORD,
		.allegiance = FACTION_ID_BLUE,
		.level = 10,
		.xPosition = 1,
		.yPosition = 1,
		.items = {
			ITEM_SWORD_RAPIER,
			ITEM_VULNERARY,
		},
	},
	{}
};

static const struct UnitDefinition UnitDef_Enemy[] = {
	{
		.charIndex = CHARACTER_ONEILL,
		.classIndex = CLASS_FIGHTER,
		.allegiance = FACTION_ID_RED,
		.level = 4,
		.xPosition = 2,
		.yPosition = 1,
		.items = {
			ITEM_AXE_IRON,
		},
		.ai = { 0, 4, 9, 0 },
	},
	{}
};

static const EventScr EventScr_Beginning[] = {
	LOAD1(0x1, UnitDef_Ally)
	ENUN
	LOAD1(0x1, UnitDef_Enemy)
	ENUN

	FADU(16)
	NoFade
	ENDA
};

static const EventScr EventScr_Ending[] = {
	MNC2(1)
	ENDA
};

static const EventListScr EventListScr_Turn[] = {
	END_MAIN
};

static const EventListScr EventListScr_Character[] = {
	END_MAIN
};

static const EventListScr EventListScr_Location[] = {
	END_MAIN
};

static const EventListScr EventListScr_Misc[] = {
	DefeatAll(EventScr_Ending)
	CauseGameOverIfLordDies
	END_MAIN
};

static const EventListScr EventListScr_SelectUnit[] = {
	END_MAIN
};

static const EventListScr EventListScr_SelectDestination[] = {
	END_MAIN
};

static const EventListScr EventListScr_UnitMove[] = {
	END_MAIN
};

static void const * const EventListScr_Tutorial[] = {
	NULL
};

static const u8 TrapData_ThisEvent[] = {
	TRAP_NONE
};

static const u8 TrapData_ThisEventHard[] = {
	TRAP_NONE
};

const struct ChapterEventGroup ThisChapter = {
	.turnBasedEvents			   = EventListScr_Turn,
	.characterBasedEvents		  = EventListScr_Character,
	.locationBasedEvents		   = EventListScr_Location,
	.miscBasedEvents			   = EventListScr_Misc,
	.specialEventsWhenUnitSelected = EventListScr_SelectUnit,
	.specialEventsWhenDestSelected = EventListScr_SelectDestination,
	.specialEventsAfterUnitMoved   = EventListScr_UnitMove,
	.tutorialEvents				= EventListScr_Tutorial,

	.traps			= TrapData_ThisEvent,
	.extraTrapsInHard = TrapData_ThisEventHard,

	.playerUnitsInNormal = UnitDef_Ally,
	.playerUnitsInHard   = UnitDef_Ally,

	.playerUnitsChoice1InEncounter = NULL,
	.playerUnitsChoice2InEncounter = NULL,
	.playerUnitsChoice3InEncounter = NULL,

	.enemyUnitsChoice1InEncounter = NULL,
	.enemyUnitsChoice2InEncounter = NULL,
	.enemyUnitsChoice3InEncounter = NULL,

	.beginningSceneEvents = EventScr_Beginning,
	.endingSceneEvents	= EventScr_Ending,
};
