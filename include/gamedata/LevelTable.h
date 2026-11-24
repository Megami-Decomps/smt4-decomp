/* Data table 9: the level tables (section 1: experience needed per level, section 2: the growth
 * percentages for levels above a devil's base level). */
#ifndef GAMEDATA_LEVELTABLE_H
#define GAMEDATA_LEVELTABLE_H

#include "gamedata/DataTable.h"
#include "gamedata/NkmBaseRecord.h"

/* Experience needed to advance from `level`; nothing past level 99. */
static __inline u32 levelExpRequirement(int level)
{
    const u32 *entries = (const u32 *)dataTableGetEntries(dataTableGet(9, 1));

    if (level >= 99) {
        return 0;
    }
    return entries[level - 1];
}

/* The growth percentage for `level`: 100 up to the demon's base level, then section 2's entry for the
 * levels above it (at most ten). */
static __inline u32 levelGrowthPercent(u32 devilId, s32 level)
{
    s32 step = level - nkmBaseGetRecord(devilId)->level + 1;
    u32 percent;

    if (step <= 0) {
        percent = 100;
    } else {
        if (step > 10) {
            step = 10;
        }
        percent = ((const u16 *)dataTableGetEntries(dataTableGet(9, 2)))[step - 1];
    }
    return percent;
}

#endif
