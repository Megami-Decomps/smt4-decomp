#include "common.h"

struct SlotMatchRecord {
    u8 unk000[0x4a]; // 0x000
    u8 category;      // 0x04a
    u8 unk04b[0x5b9]; // 0x04b
};

struct SlotMatchTable {
    u8 unk00[0x90]; // 0x00
    SlotMatchRecord slots[24]; // 0x90
};

extern "C" SlotMatchTable* gameGetSlotTable();

// Find a slot by identity or by its category byte.
extern "C" s32 gameSlotFindByCategory(const SlotMatchRecord* record)
{
    if (record != NULL) {
        SlotMatchRecord* slot = gameGetSlotTable()->slots;
        for (s32 index = 0; index < 24; ++index, ++slot) {
            if (slot == record || slot->category == record->category) {
                return index;
            }
        }
    }
    return -1;
}
