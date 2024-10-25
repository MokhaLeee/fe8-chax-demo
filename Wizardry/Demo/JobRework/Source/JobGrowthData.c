#include "common-chax.h"
#include "demo/job-rework.h"

struct JobGrowthTable const gJobGrowthTable[0x100] = {
    [CLASS_MERCENARY] = {
        .hp  = 10,
        .pow = 5,
        .spd = 5,
        .res = -5,
    },
    [CLASS_MERCENARY_F] = {
        .hp  = 10,
        .pow = 5,
        .spd = 5,
        .res = -5,
    },
};
