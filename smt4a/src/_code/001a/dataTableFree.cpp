#include "common.h"

extern "C" {

#define DATA_TABLE_SLOTS 0x50

typedef struct DataTableSlot {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *data;      /* loaded table, NULL when free */
    /* 0x08 */ u32 unk08;
    /* 0x0c */ u8 locked;       /* non-zero keeps the table loaded */
    /* 0x0d */ u8 unk0d[3];
} DataTableSlot;

void asdMemFree(void *block);

extern DataTableSlot g_dataTableSlots[DATA_TABLE_SLOTS]; /* 0x5e2214 */

/* Frees data table slot `index`; fails (0) for a bad index or a locked table. */
u32 dataTableFree(u32 index)
{
    DataTableSlot *slot;

    if (index < DATA_TABLE_SLOTS) {
        slot = &g_dataTableSlots[index];
        if (slot->data == NULL) {
            return 1;
        }
        if (slot->locked == 0) {
            asdMemFree(slot->data);
            slot->data = NULL;
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
