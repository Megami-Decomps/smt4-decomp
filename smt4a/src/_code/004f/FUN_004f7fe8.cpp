#include "common.h"

struct SourceEntry {
    s32 id;     // 0x00, negative when the slot is free
    s32 state;  // 0x04
    u8 unk08[0x34];
};

struct SourceTable {
    u8 unk0000[0x1398];
    SourceEntry entries[50]; // 0x1398
};

struct SourceOwner {
    u8 unk00[0x50];
    u32 flags; // 0x50
};

extern "C" {

void *btlGetMainState(void);
s32 stateEntryFindById(void *battle, u32 id);

// Register the id in the first free slot of the table, unless the owner forbids it.
void FUN_004f7fe8(SourceTable *table, SourceOwner *owner, u32 id)
{
    if ((owner->flags & 0x20000) == 0) {
        for (s32 i = 0; i < 50; i++) {
            if (table->entries[i].id < 0) {
                s32 state = stateEntryFindById(btlGetMainState(), id);
                table->entries[i].id = id;
                table->entries[i].state = state;
                return;
            }
        }
    }
}

} /* extern "C" */
