#include "gamedata/DataTable.h"

extern "C" {

typedef struct DataTable {
    /* 0x0 */ u32 magic;       /* 'TBL1' */
    /* 0x4 */ u32 byteSize;
    /* 0x8 */ u32 entrySize;
    /* 0xC */ u32 unkC;
    /* 0x10 */ u8 entries[1];
} DataTable;

/* Address of the first entry of a 'TBL1' data table, or NULL. */
void *dataTableGetEntries(void *section)
{
    DataTable *table = (DataTable *)section;
    u8 *entries;

    if ((table != NULL) && (table->magic == 0x314c4254)) {
        entries = table->entries;
    } else {
        entries = NULL;
    }
    return entries;
}

} /* extern "C" */
