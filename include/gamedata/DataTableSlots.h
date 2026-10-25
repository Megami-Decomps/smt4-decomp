#pragma once
#include "common.h"

#define DATA_TABLE_SLOTS 0x50

/* One entry of the 0x50-entry table of loadable data files at 0x5e2214 (smt4a). */
typedef struct DataTableSlot {
    /* 0x00 */ const char *path;   /* file the table is loaded from */
    /* 0x04 */ void *data;         /* loaded table, NULL when free */
    /* 0x08 */ u32 size;           /* size of the loaded file */
    /* 0x0c */ u8 locked;          /* non-zero keeps the table loaded */
    /* 0x0d */ u8 unk0d[3];
} DataTableSlot;
typedef char DataTableSlotSizeCheck[sizeof(DataTableSlot) == 0x10 ? 1 : -1];

extern "C" {
extern DataTableSlot g_dataTableSlots[DATA_TABLE_SLOTS]; /* 0x5e2214 */
}
