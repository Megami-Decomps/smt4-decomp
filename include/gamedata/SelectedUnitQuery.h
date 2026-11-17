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
typedef char SelectedUnitListAvailableOffsetCheck[offsetof(SelectedUnitListEntry, available) == 4 && sizeof(SelectedUnitListEntry) == 8 ? 1 : -1];
#endif
