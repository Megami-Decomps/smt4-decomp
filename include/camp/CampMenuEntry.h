/* Data table 21 (0x15) records as the camp menu reads them. */
#ifndef CAMP_CAMPMENUENTRY_H
#define CAMP_CAMPMENUENTRY_H

#include "common.h"

/* The id byte keys the record, five flags hide it, and a group/flag pair gates it. */
struct CampMenuEntry {
    /* 0x00 */ u8 id;
    /* 0x01 */ u8 group;
    /* 0x02 */ u8 unk02[0x54];
    /* 0x56 */ u16 requiredFlag;    /* 0 = none */
    /* 0x58 */ u16 requiredDataBit; /* 0 = none */
    /* 0x5A */ u16 hideFlags[5];    /* 0 = unused */
};

extern "C" s32 gameFlagIsSet(u32 flag);

/* Whether any of the entry's hide flags is set. */
static inline s32 campMenuEntryHidden(const CampMenuEntry *entry)
{
    return (entry->hideFlags[0] != 0 && gameFlagIsSet(entry->hideFlags[0]) != 0) ||
           (entry->hideFlags[1] != 0 && gameFlagIsSet(entry->hideFlags[1]) != 0) ||
           (entry->hideFlags[2] != 0 && gameFlagIsSet(entry->hideFlags[2]) != 0) ||
           (entry->hideFlags[3] != 0 && gameFlagIsSet(entry->hideFlags[3]) != 0) ||
           (entry->hideFlags[4] != 0 && gameFlagIsSet(entry->hideFlags[4]) != 0);
}

#endif
