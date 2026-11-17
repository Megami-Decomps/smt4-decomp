#ifndef GAMEDATA_ITEM_FLAG_STATE_H
#define GAMEDATA_ITEM_FLAG_STATE_H
#include "common.h"
#include <stddef.h>

/* The roll state of one (map, area) encounter (gameDataGetTableEntry; gamedata/EncountData.h). */
struct ItemFlagCacheState {
    /* 0x00 */ u16 value;
    /* 0x02 */ u8 count;
    /* 0x03 */ u8 flags;
};
typedef char ItemFlagDefinitionALayout[
    offsetof(ItemFlagCacheState, count) == 2 &&
    offsetof(ItemFlagCacheState, flags) == 3 &&
    sizeof(ItemFlagCacheState) == 4 ? 1 : -1];
#endif
