#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 data[0x40];
} Entry;

u32 dataTableGet(u32 table, u32 arg);
u32 dataTableGetCount(u32 table);
Entry *dataTableGetEntries(void);

/* Returns entry `index` of data table 0x37 (0x40 bytes each), or NULL when the index is out of range. */
Entry *dataTableGetEntry37(u32 index)
{
    u32 table;
    Entry *entries;
    u32 count;

    table = dataTableGet(0x37, 0);
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
