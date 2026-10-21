#include "common.h"

struct IdentifiedEntry {
    u32 unk00; // 0x00
    s32 id;    // 0x04
};

struct IdentifiedEntryOwner {
    u8 unk0000[0x216c]; // 0x0000
    IdentifiedEntry* entries[42]; // 0x216c
};

// Find the first non-null entry whose ID matches.
extern "C" IdentifiedEntry* stateEntryFindById(const IdentifiedEntryOwner* owner, s32 id)
{
    for (s32 index = 0; index < 42; ++index) {
        if (owner->entries[index] != NULL && owner->entries[index]->id == id) {
            return owner->entries[index];
        }
    }
    return NULL;
}
