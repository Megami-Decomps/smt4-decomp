#include "common.h"

struct InventoryEntry {
    u16 id; // 0x00
    u16 unk02;
    u32 data[7]; // 0x04
};
struct InventoryList {
    s16 count; // 0x0000
    u16 unk0002;
    InventoryEntry entries[1280]; // 0x0004
    u16 unkA004;
    s16 maximum; // 0xa006
    u16 specialCount; // 0xa008
};

extern "C" {
s32 FUN_002a4b28(u16 id);

// Append an inventory record and update the special-entry count.
void inventoryListAppend(InventoryList *list, const InventoryEntry *entry)
{
    list->entries[list->count] = *entry;
    ++list->count;
    if (FUN_002a4b28(entry->id) != 0) {
        ++list->specialCount;
    }
}
}
