#include "gamedata/DataTable.h"

extern "C" {

typedef struct DataTable {
    /* 0x0 */ u32 magic;       /* 'TBL1' */
    /* 0x4 */ u32 byteSize;
    /* 0x8 */ u32 entrySize;
    /* 0xC */ u32 unkC;
    /* 0x10 */ u8 entries[1];
} DataTable;

/* Number of entries of a 'TBL1' (0x314c4254) data table, or 0 when it is missing or malformed. */
u32 dataTableGetCount(void *section)
{
    DataTable *table = (DataTable *)section;

    if (((table != NULL) && (table->magic == 0x314c4254)) && (table->entrySize != 0)) {
        return table->byteSize / table->entrySize;
    }
    return 0;
}

} /* extern "C" */
