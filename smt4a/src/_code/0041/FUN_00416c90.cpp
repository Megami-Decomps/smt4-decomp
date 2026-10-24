/* NON_MATCHING: only scheduling differs (retail loads the buffer pointer after the float stores; built hoists the load above them). */
#include "common.h"

struct SlotEntry {
    s32 unk00;          // 0x00
    s32 unk04;          // 0x04
    f32 values[3];      // 0x08
    u8 unk14[0x8c];
    u8 enabled;         // 0xa0
    u8 unka1[3];
    s32 unka4;          // 0xa4
    void *buffer;       // 0xa8
    s32 unkac;          // 0xac
};

extern "C" {

void asdMemFreeSlot(void *buffer);

// Reset all twelve slot entries, releasing their buffers.
SlotEntry *FUN_00416c90(SlotEntry *entries)
{
    for (s32 i = 0; i < 12; i++) {
        SlotEntry *entry = &entries[i];
        entry->unk00 = 0;
        entry->unk04 = 0;
        entry->enabled = 0;
        entry->unka4 = 0;
        entry->values[2] = 0.0f;
        entry->values[1] = 0.0f;
        entry->values[0] = 0.0f;
        if (entry->buffer != NULL) {
            asdMemFreeSlot(entry->buffer);
            entry->buffer = NULL;
        }
        entry->unkac = 0;
    }
    return entries;
}

} /* extern "C" */
