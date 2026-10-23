#ifndef GAMEDATA_FLAGGATEDCATALOG_H
#define GAMEDATA_FLAGGATEDCATALOG_H
#include "common.h"
#include <stddef.h>
struct FlagGatedCatalogRecord {
    u16 id;
    u8 unk002[0x56];
    u16 initialMode;
    u16 hideFlag;
    u16 requiredFlag;
    u16 progressFlags[5];
    u8 unk068[0x14];
};
struct FlagGatedCatalogList {
    u8 unk000[0xFC];
    s32 visibleCount;
    u8 unk100[0x308];
    s16 entries[300];
    s32 count;
};
typedef char FlagGatedCatalogOffsetsCheck[
    offsetof(FlagGatedCatalogRecord, initialMode) == 0x58 &&
    offsetof(FlagGatedCatalogRecord, progressFlags) == 0x5E &&
    sizeof(FlagGatedCatalogRecord) == 0x7C &&
    offsetof(FlagGatedCatalogList, entries) == 0x408 &&
    offsetof(FlagGatedCatalogList, count) == 0x660 ? 1 : -1];
#endif
