#include "common.h"

extern "C" {

typedef struct DataTable {
    /* 0x00 */ s32 magic;          /* 'TBL1' */
    /* 0x04 */ u32 size;           /* size of the entry data in bytes */
    /* 0x08 */ u32 entrySize;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u8 entries[1];
} DataTable;

/* Returns the number of entries in a 'TBL1' data table (0 for a missing or invalid table). */
u32 dataTableGetCount(DataTable *table)
{
    if ((table != NULL && table->magic == 0x314C4254) && table->entrySize != 0) {
        return table->size / table->entrySize;
    }
    return 0;
}

} /* extern "C" */
