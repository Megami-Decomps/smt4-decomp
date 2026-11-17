/* The camp menu's command rows (gamedata/CampComTable.h). */
#ifndef CAMP_CAMPMENUENTRY_H
#define CAMP_CAMPMENUENTRY_H

#include "gamedata/CampComTable.h"

extern "C" s32 gameFlagIsSet(u32 flag);

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
