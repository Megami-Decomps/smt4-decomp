#include "common.h"

struct LoadSlot {
    u32 source;   // 0x00
    u32 handle;   // 0x04
    u32 data;     // 0x08
    u8 failed;    // 0x0c
    u8 unk0d[3];
};

extern "C" {

extern LoadSlot g_dataTableSlots[80];
u32 FUN_0013c174(u32 source, u32 *data, s32 mode);

// Make sure the slot's resource is loaded; false for an invalid or failed slot.
u32 loadSlotEnsureLoaded(u32 index)
{
    if (index >= 80) {
        return 0;
    }
    LoadSlot *slot = &g_dataTableSlots[index];
    if (slot->handle == 0) {
        if (slot->failed != 0) {
            return 0;
        }
        if (index == 7) {
            slot->handle = FUN_0013c174(slot->source, &slot->data, 1);
        } else {
            slot->handle = FUN_0013c174(slot->source, &slot->data, 0);
        }
    }
    return 1;
}

} /* extern "C" */
