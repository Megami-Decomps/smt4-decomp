#include "common.h"

struct FileSlot {
    u32 unk00;
    void *buffer; // 0x04
    u32 size; // 0x08
    u8 busy; // 0x0c
    u8 unk0d[3];
};

extern "C" {
extern FileSlot g_fileSlots[67];
void asdMemFree(void *buffer);

// Release an idle file slot; an already empty slot also succeeds.
s32 fileSlotFree(u32 index)
{
    if (index < 67) {
        FileSlot *slot = &g_fileSlots[index];
        if (slot->buffer == NULL) {
            return 1;
        }
        if (slot->busy == 0) {
            asdMemFree(slot->buffer);
            slot->buffer = NULL;
            return 1;
        }
    }
    return 0;
}
}
