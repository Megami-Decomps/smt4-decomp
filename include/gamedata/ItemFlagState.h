#ifndef GAMEDATA_ITEM_FLAG_STATE_H
#define GAMEDATA_ITEM_FLAG_STATE_H
#include "common.h"
#include <stddef.h>

struct ItemFlagDefinitionA {
    /* 0x00 */ u8 groupId;
    /* 0x01 */ u8 itemId;
    /* 0x02 */ u8 unk02[0xC];
    /* 0x0E */ u16 firstFlag;
    /* 0x10 */ u16 secondFlag;
    /* 0x12 */ u8 unk12[0x92];
};
struct ItemFlagCacheState {
    /* 0x00 */ u16 value;
    /* 0x02 */ u8 count;
    /* 0x03 */ u8 flags;
};
struct ItemFlagVariant;
typedef char ItemFlagDefinitionALayout[
    offsetof(ItemFlagDefinitionA, groupId) == 0 &&
    offsetof(ItemFlagDefinitionA, itemId) == 1 &&
    offsetof(ItemFlagDefinitionA, firstFlag) == 0xE &&
    offsetof(ItemFlagDefinitionA, secondFlag) == 0x10 &&
    sizeof(ItemFlagDefinitionA) == 0xA4 &&
    offsetof(ItemFlagCacheState, count) == 2 &&
    offsetof(ItemFlagCacheState, flags) == 3 &&
    sizeof(ItemFlagCacheState) == 4 ? 1 : -1];
#endif
