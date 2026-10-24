#include "common.h"

struct DataTableSlot {
    u32 key;      // 0x00
    u32 handle;   // 0x04
    u8 data[8];   // 0x08
};

extern "C" {

extern DataTableSlot g_dataTableSlots[]; /* 0x5e2214 */

u32 FUN_0013c174(u32 key, void *data, s32 arg);

/* Loads the handle of each of the eleven listed data table slots that has none yet. */
u32 FUN_003f8940(void)
{
    s32 ids[11] = {0, 2, 4, 0xB, 0x18, 8, 9, 10, 0x2B, 0x40, 0x41};

    for (s32 i = 0; i < 11; i++) {
        DataTableSlot *slot = &g_dataTableSlots[ids[i]];

        if (slot->handle == 0) {
            slot->handle = FUN_0013c174(slot->key, slot->data, 0);
        }
    }
    return 1;
}

} /* extern "C" */
