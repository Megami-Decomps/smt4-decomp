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
struct CachedCommandTable {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ CachedCommandRecord **records;
};
typedef char CachedCommandWordsSizeCheck[sizeof(CachedCommandWords) == 0x790 ? 1 : -1];
typedef char CachedCommandRecordOffsetCheck[offsetof(CachedCommandRecord, commands) == 0x10 &&
    offsetof(CachedCommandRecord, trailer) == 0x7A0 ? 1 : -1];
typedef char CachedCommandTableOffsetCheck[offsetof(CachedCommandTable, records) == 8 ? 1 : -1];

#endif
