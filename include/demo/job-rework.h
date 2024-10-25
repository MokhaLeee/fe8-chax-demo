#pragma once

#include "common-chax.h"
#include "kernel-lib.h"

/**
 * Growth
 */
struct JobGrowthTable {
    s8 hp, pow, mag, skl, spd, lck, def, res, mov, con;
    u8 _pad_[2];
};

extern struct JobGrowthTable const gJobGrowthTable[0x100];
extern struct JobGrowthTable const *const gpJobGrowthTable;

int GetUnitJobHpGrowth(int status, struct Unit *unit);
int GetUnitJobStrGrowth(int status, struct Unit *unit);
int GetUnitJobMagGrowth(int status, struct Unit *unit);
int GetUnitJobSklGrowth(int status, struct Unit *unit);
int GetUnitJobSpdGrowth(int status, struct Unit *unit);
int GetUnitJobLckGrowth(int status, struct Unit *unit);
int GetUnitJobDefGrowth(int status, struct Unit *unit);
int GetUnitJobResGrowth(int status, struct Unit *unit);
