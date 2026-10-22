#include "common.h"

extern "C" {

#define DATA_TABLE_SLOTS 0x50
#define DATA_TABLE_SPECIAL_SLOT 63

typedef struct DataTableSlot {
    /* 0x00 */ u32 fileId;
    /* 0x04 */ void *data;      /* loaded table, NULL when free */
    /* 0x08 */ u32 unk08;
    /* 0x0c */ u8 locked;       /* non-zero keeps the table loaded */
    /* 0x0d */ u8 unk0d[3];
} DataTableSlot;

void *FUN_0013c174(u32 fileId, u32 *out, u32 mode);

extern DataTableSlot g_dataTableSlots[DATA_TABLE_SLOTS]; /* 0x5e2214 */

/* Reloads every locked data table slot whose table is not loaded; slot 63 loads in mode 1. */
s32 dataTableReloadLocked(void)
{
    u8 order[DATA_TABLE_SLOTS];


    for (s32 i = 0; i < DATA_TABLE_SLOTS; i++) {
        order[i] = i;
    }
    for (s32 i = 0; i < DATA_TABLE_SLOTS; i++) {
        u8 index = order[i];
        DataTableSlot *slot = &g_dataTableSlots[index];
        if (slot->data == NULL && slot->locked != 0) {
            if (index == DATA_TABLE_SPECIAL_SLOT) {
                slot->data = FUN_0013c174(slot->fileId, &slot->unk08, 1);
            } else {
                slot->data = FUN_0013c174(slot->fileId, &slot->unk08, 0);
            }
        }
    }
    return 1;
}

} /* extern "C" */
