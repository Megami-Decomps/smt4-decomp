#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u16 value;
    /* 0x02 */ u16 unk02;
} Entry;

u32 dataTableGet(u32 table, u32 arg);
u32 dataTableGetCount(u32 table);
Entry *dataTableGetEntries(void);

/* Returns the value of entry `index` of data table (1, 2), or of entry 0 when the index is out of range. */
u16 dataTableGetEntry0102Value(u32 index)
{
    u16 value;
    u32 table;
    Entry *entries;
    u32 count;

    table = dataTableGet(1, 2);
    entries = dataTableGetEntries();
    count = dataTableGetCount(table);
    if (count > index) {
        value = entries[index].value;
    } else {
        value = entries[0].value;
    }
    return value;
}

} /* extern "C" */
