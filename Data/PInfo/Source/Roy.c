#include "common-chax.h"
#include "constants/texts.h"
#include "demo/chax-pids.h"
#include "demo/chax-jids.h"
#include "demo/chax-faces.h"

#include "pinfo-common.h"

const struct CharacterData PInfo_Roy = {
    .nameTextId = MSG_0212,
    .descTextId = 0x26e,
    .number = CHAX_PID_ROY,
    .defaultClass = CHAX_JID_ROY_LORD_T0,
    .portraitId = Mug_Roy,
    .affinity = UNIT_AFFIN_LIGHT,
    .sort_order = 0x1,
    .baseLevel = 1,

    .baseHP  = 0,
    .basePow = 0,
    .baseSkl = 0,
    .baseSpd = 0,
    .baseDef = 0,
    .baseRes = 0,
    .baseLck = 5,
    .baseCon = 0,

    .baseRanks = {
        [ITYPE_SWORD] = WPN_EXP_E,
    },

    .growthHP  = 70,
    .growthPow = 40,
    .growthSkl = 60,
    .growthSpd = 60,
    .growthDef = 30,
    .growthRes = 30,
    .growthLck = 60,
    .attributes = CA_LORD,
    .pSupportData = SupportData_all_zero,
    .visit_group = 0x7,
};
