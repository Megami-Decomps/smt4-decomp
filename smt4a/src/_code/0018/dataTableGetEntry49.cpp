#include "common.h"
#include "gamedata/DataTableAccess_Smt4a.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 data[0x4C];
} Entry;

u32 dataTableGet(u32 table, u32 arg);
u32 dataTableGetCount(u32 table);
Entry *dataTableGetEntries(void);

/* Returns entry `index` of data table 0x49 (0x4c bytes each), or NULL when the index is out of range. */
Entry *dataTableGetEntry49(u32 index)
{
    u32 table;
    Entry *entries;
    u32 count;

    table = dataTableGet(0x49, 0);
    entries = dataTableGetEntries();
    count = dataTableGetCount(table);
    if (index >= count) {
        entries = NULL;
    } else {
        entries = entries + index;
    }
    return entries;
}

} /* extern "C" */
