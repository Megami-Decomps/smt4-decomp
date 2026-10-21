#include "common.h"

struct StoredDemonRecord {
    u8 unk000[0xd6];
    u16 id; // 0xd6
    u8 unk0d8[0x52c];
};
struct StoredDemonSlots {
    StoredDemonRecord records[24]; // 0x0000, stride0x604
    u8 unk9060[0x90];
    s8 slots[24]; // 0x90f0
};

extern "C" {
StoredDemonSlots *gameGetSlotTable(void);

// Test whether the stored demon slots contain a record with the requested id.
u32 partyHasStoredDemon(u32 id)
{
    StoredDemonSlots *table = gameGetSlotTable();
    for (s32 index = 0; index < 24; ++index) {
        s32 slot = table->slots[index];
        if (slot >= 0 && table->records[slot].id == id) {
            return 1;
        }
    }
    return 0;
}
}
