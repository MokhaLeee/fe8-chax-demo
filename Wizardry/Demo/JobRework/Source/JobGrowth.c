#include "common-chax.h"
#include "kernel-lib.h"

#include "demo/job-rework.h"

int GetUnitJobHpGrowth(int status, struct Unit *unit)
{
    return status + gpJobGrowthTable[UNIT_CLASS_ID(unit)].hp;
}

int GetUnitJobStrGrowth(int status, struct Unit *unit)
{
    return status + gpJobGrowthTable[UNIT_CLASS_ID(unit)].pow;
}

int GetUnitJobMagGrowth(int status, struct Unit *unit)
{
    return status + gpJobGrowthTable[UNIT_CLASS_ID(unit)].mag;
}

int GetUnitJobSklGrowth(int status, struct Unit *unit)
{
    return status + gpJobGrowthTable[UNIT_CLASS_ID(unit)].skl;
}

int GetUnitJobSpdGrowth(int status, struct Unit *unit)
{
    return status + gpJobGrowthTable[UNIT_CLASS_ID(unit)].spd;
}

int GetUnitJobLckGrowth(int status, struct Unit *unit)
{
    return status + gpJobGrowthTable[UNIT_CLASS_ID(unit)].lck;
}

int GetUnitJobDefGrowth(int status, struct Unit *unit)
{
    return status + gpJobGrowthTable[UNIT_CLASS_ID(unit)].def;
}

int GetUnitJobResGrowth(int status, struct Unit *unit)
{
    return status + gpJobGrowthTable[UNIT_CLASS_ID(unit)].res;
}
