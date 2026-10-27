/* Releases every in-use slot of the slot table (freeing its resource), then marks the table empty. */
#include "common.h"

extern "C" {

typedef struct Slot {
    /* 0x00 */ u8 used;
    /* 0x01 */ u8 unk01[7];
    /* 0x08 */ u32 handle;
    /* 0x0C */ u32 resource;
    /* 0x10 */ u8 unk10[2];
    /* 0x12 */ u16 unk12;
    /* 0x14 */ u8 unk14[0x0C];
} Slot; /* 0x20 */

typedef struct SlotTable {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 count;
    /* 0x08 */ u8 active;
    /* 0x09 */ u8 loaded;
    /* 0x0A */ u8 unk0A[2];
    /* 0x0C */ Slot slots[1];
} SlotTable;

extern SlotTable *DAT_00448c20;

extern void FUN_002877d4(u32 handle);

void FUN_001a9574(void)
{
    s32 i;

    if (DAT_00448c20->loaded != 0) {
        for (i = 0; i < DAT_00448c20->count; i++) {
            Slot *slot = &DAT_00448c20->slots[i];

            if (slot->used != 0) {
                if (slot->resource != 0) {
                    FUN_002877d4(slot->handle);
                    slot->resource = 0;
                    slot->unk12 = 0;
                    slot->handle = 0;
                }
                slot->used = 0;
            }
        }
        DAT_00448c20->count = 0;
        DAT_00448c20->active = 0;
        DAT_00448c20->loaded = 0;
    }
}

}
