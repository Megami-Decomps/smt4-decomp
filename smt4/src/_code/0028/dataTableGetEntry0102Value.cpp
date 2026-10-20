#include "common.h"

extern "C" {

extern u32 dataTableGetCount(u32 table);
extern u16 *dataTableGetEntries(void);
extern u32 dataTableGet(u32 id, u32 index);

/* First halfword of the index-th 4-byte record of data table 1/2 (the first record's when out of range). */
u16 dataTableGetEntry0102Value(u32 index)
{
    u16 value;
    u32 table = dataTableGet(1, 2);
    u16 *entries = dataTableGetEntries();
    u32 count = dataTableGetCount(table);

    if (count > index) {
        value = entries[index * 2];
    } else {
        value = *entries;
    }
    return value;
}

} /* extern "C" */
