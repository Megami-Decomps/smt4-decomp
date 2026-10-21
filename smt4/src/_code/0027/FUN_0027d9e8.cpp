#include "common.h"

struct IdSlotEntry {
    u32 unk00; // 0x00
    s32 id;    // 0x04
};
struct IdSlots {
    u8 unk0000[0x2134]; // 0x0000
    IdSlotEntry* entries[42]; // 0x2134
};

// Finds a populated slot whose entry has the requested ID.
extern "C" IdSlotEntry* FUN_0027d9e8(const IdSlots* slots, s32 id)
{
    for (s32 i = 0; i < 42; ++i) {
        if (slots->entries[i] != NULL && slots->entries[i]->id == id) {
            return slots->entries[i];
        }
    }
    return NULL;
}
