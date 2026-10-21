#include "common.h"

struct PartySlotRecord {
    u8 unk00[0xca]; // 0x00
    u16 id;          // 0xca
    u8 unkcc[0x60]; // 0xcc
};

struct PartySlotTable {
    PartySlotRecord records[24]; // 0x0000
    u8 unk1c20[0x68];           // 0x1c20
    s8 order[24];                // 0x1c88
};

extern "C" PartySlotTable* gameGetSlotTable();

// Find the party-slot index whose active order entry has the requested ID.
extern "C" s32 partyFindSlotById(u32 id)
{
    PartySlotTable* table = gameGetSlotTable();
    for (s32 index = 0; index < 24; ++index) {
        s32 slot = table->order[index];
        if (slot >= 0 && table->records[slot].id == id) {
            return slot;
        }
    }
    return -1;
}
