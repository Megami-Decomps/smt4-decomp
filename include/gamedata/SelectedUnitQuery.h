#ifndef GAMEDATA_SELECTED_UNIT_QUERY_H
#define GAMEDATA_SELECTED_UNIT_QUERY_H
#include "common.h"
#include <stddef.h>
struct SelectedUnitListEntry {
    u32 packedIndex; // 0x00: signed unit index in the low halfword
    union {
        u32 unk04; // 0x04
        u16 available;
    };
};
struct SelectedUnitQueryOwner {
    u8 unk000[0x670]; // 0x000
    s32 partySlot; // 0x670
    s32 listSelection; // 0x674
    u8 unk678[0xC0]; // 0x678
    SelectedUnitListEntry entries[1]; // 0x738: trailing selection table
};
typedef char SelectedUnitListAvailableOffsetCheck[offsetof(SelectedUnitListEntry, available) == 4 && sizeof(SelectedUnitListEntry) == 8 ? 1 : -1];
#endif
