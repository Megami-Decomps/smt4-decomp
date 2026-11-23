#ifndef GFX_CACHEDCOMMANDS_H
#define GFX_CACHEDCOMMANDS_H

#include "common.h"
#include <stddef.h>

struct CachedCommandWords {
    /* 0x000 */ s32 count;
    /* 0x004 */ u32 words[0x78C / sizeof(u32)];
};
struct CachedCommandRecord {
    /* 0x000 */ u8 unk000[0x10];
    /* 0x010 */ CachedCommandWords commands;
    /* 0x7A0 */ u8 trailer[1];
};
/* The emitters' record table: three lists of record pointers (FUN_00349d88 / FUN_00419ce0 read the first,
 * FUN_00349cdc / FUN_00419c34 the second, FUN_00349e34 / FUN_00419d8c the third). */
struct CachedCommandTable {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ CachedCommandRecord **recordLists[3];
};
typedef char CachedCommandWordsSizeCheck[sizeof(CachedCommandWords) == 0x790 ? 1 : -1];
typedef char CachedCommandRecordOffsetCheck[offsetof(CachedCommandRecord, commands) == 0x10 &&
    offsetof(CachedCommandRecord, trailer) == 0x7A0 ? 1 : -1];
typedef char CachedCommandTableOffsetCheck[offsetof(CachedCommandTable, recordLists) == 4 ? 1 : -1];

#endif
