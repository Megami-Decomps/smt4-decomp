/* The camp menu's command rows (gamedata/CampComTable.h). */
#ifndef CAMP_CAMPMENUENTRY_H
#define CAMP_CAMPMENUENTRY_H

#include "gamedata/CampComTable.h"

struct GridNavigation;
extern "C" {
s32 gameFlagIsSet(u32 flag);
u32 idListAnyValid(const CampComRecord *record);
u8 dataTable15GetUnlockedEntryId(u32 group, s32 index);
void FUN_002ccc28(u32 command, u32 *icon, u32 *label, s32 selected);
u32 FUN_0029e958(const GridNavigation *grid);
s32 objectPartRunUnlessLocked(GridNavigation *grid);
}

/* Whether any of the entry's hide flags is set. */
static inline s32 campMenuEntryHidden(const CampComRecord *entry)
{
    return (entry->hideFlags[0] != 0 && gameFlagIsSet(entry->hideFlags[0]) != 0) ||
           (entry->hideFlags[1] != 0 && gameFlagIsSet(entry->hideFlags[1]) != 0) ||
           (entry->hideFlags[2] != 0 && gameFlagIsSet(entry->hideFlags[2]) != 0) ||
           (entry->hideFlags[3] != 0 && gameFlagIsSet(entry->hideFlags[3]) != 0) ||
           (entry->hideFlags[4] != 0 && gameFlagIsSet(entry->hideFlags[4]) != 0);
}

#endif
