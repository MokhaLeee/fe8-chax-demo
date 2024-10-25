#include "global.h"
#include "bmunit.h"
#include "bmitem.h"
#include "ekrbattle.h"

#include "common-chax.h"
#include "constants/texts.h"
#include "demo/chax-jids.h"
#include "demo/chax-sms.h"

extern const struct BattleAnimDef LordT0_Anims[];

const struct ClassData JInfo_RoyLord = {
    .nameTextId = MSG_02BF,
    .descTextId = MSG_0309,
    .number = CHAX_JID_ROY_LORD_T0,
    .promotion = CLASS_EPHRAIM_MASTER_LORD, // TODO
    .SMSId = CHAX_SMS_ROY_LORD_T0,
    .slowWalking = 0,
    .sort_order = 0x29,

    .baseHP = 16,
    .basePow = 5,
    .baseSkl = 8,
    .baseSpd = 9,
    .baseDef = 2,
    .baseRes = 2,
    .baseCon = 6,
    .baseMov = 6,

    .maxHP = 60,
    .maxPow = 24,
    .maxSkl = 28,
    .maxSpd = 29,
    .maxDef = 22,
    .maxRes = 22,
    .maxCon = 20,

    .classRelativePower = 3,

    .growthHP = 100,
    .growthPow = 30,
    .growthSkl = 45,
    .growthSpd = 50,
    .growthDef = 25,
    .growthRes = 25,
    .growthLck = 100,

    .attributes = CA_LORD | CA_LOCK_1 | CA_LOCK_2 | CA_LOCK_4,

    .baseRanks = {
        [ITYPE_SWORD] = WPN_EXP_D
    },

    .pBattleAnimDef = LordT0_Anims,
    .pMovCostTable = {
        TerrainTable_MovCost_CommonT2Normal,
        TerrainTable_MovCost_CommonT2Rain,
        TerrainTable_MovCost_CommonT2Snow,
    },
    .pTerrainAvoidLookup = TerrainTable_Avo_Common,
    .pTerrainDefenseLookup = TerrainTable_Def_Common,
    .pTerrainResistanceLookup = TerrainTable_Res_Common,
};
