#include "common.h"

struct SavedPartyRecord {
    u8 unk000[0x46]; // 0x000
    u16 id;            // 0x046
    u8 unk048[0x5bc]; // 0x048
};
struct PartySlotTable {
    u8 unk0000[0x90]; // 0x0000
    SavedPartyRecord records[24]; // 0x0090
    s8 activeSlots[24]; // 0x90f0
};

extern "C" {
PartySlotTable* gameGetSlotTable(void);

// Finds a matching record among the active party slots, skipping negative slot indices.
s32 partyFindActiveSlotById(u32 id)
{
    PartySlotTable* table = gameGetSlotTable();
    for (s32 index = 0; index < 24; ++index) {
        s32 slot = table->activeSlots[index];
        if (slot >= 0 && table->records[slot].id == id) {
            return slot;
        }
    }
    return -1;
}
}
