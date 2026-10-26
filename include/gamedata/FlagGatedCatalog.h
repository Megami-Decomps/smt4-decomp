#ifndef GAMEDATA_FLAGGATEDCATALOG_H
#define GAMEDATA_FLAGGATEDCATALOG_H
#include "common.h"
#include <stddef.h>
struct FlagGatedCatalogList {
    u8 unk000[0xFC];
    s32 visibleCount;
    u8 unk100[0x308];
    s16 entries[300];
    s32 count;
};
typedef char FlagGatedCatalogOffsetsCheck[
    offsetof(FlagGatedCatalogList, entries) == 0x408 &&
    offsetof(FlagGatedCatalogList, count) == 0x660 ? 1 : -1];
#endif
