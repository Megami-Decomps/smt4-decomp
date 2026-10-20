#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 value;
    /* 0x01 */ u8 unk01[0x93];
} Entry;                        /* 0x94 */

u32 dataTableGet(u32 table, u32 arg);
u32 dataTableGetCount(u32 table);
Entry *dataTableGetEntries(void);

/* Returns the first byte of entry `index` of data table 0x24, or -1 when the index is out of range. */
u32 dataTableGetEntry24Byte0(u32 index)
{
    u32 table;
    Entry *entries;
    u32 result;

    table = dataTableGet(0x24, 0);
    entries = dataTableGetEntries();
    result = dataTableGetCount(table);
    if (index >= result) {
        result = 0xFFFFFFFF;
    } else {
        result = (u32)entries[index].value;
    }
    return result;
}

} /* extern "C" */
