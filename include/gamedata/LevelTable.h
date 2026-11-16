/* Data table 9: the level tables (section 1: experience needed per level, section 2: the growth
 * percentages for levels above a devil's base level). */
#ifndef GAMEDATA_LEVELTABLE_H
#define GAMEDATA_LEVELTABLE_H

#include "gamedata/DataTable.h"

/* Experience needed to advance from `level`; nothing past level 99. */
static __inline u32 levelExpRequirement(int level)
{
    const u32 *entries = (const u32 *)dataTableGetEntries(dataTableGet(9, 1));

    if (level >= 99) {
        return 0;
    }
    return entries[level - 1];
}

#endif
