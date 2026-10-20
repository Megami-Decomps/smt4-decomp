#include "common.h"

extern "C" {

extern u32 dataTableGetCount(u32 table);
extern u8 *dataTableGetEntries(void);
extern u32 dataTableGet(u32 id, u32 index);

/* Byte at +1 of record `index` (0x90-byte records) of data table 0x24/0, or 0xFFFFFFFF when out of range. */
u32 dataTable24Sub0GetRecord(u32 index)
{
    u32 table = dataTableGet(0x24, 0);
    u8 *entries = dataTableGetEntries();
    u32 count = dataTableGetCount(table);
    u32 value;

    if (index >= count) {
        value = 0xffffffff;
    } else {
        value = entries[index * 0x90 + 1];
    }
    return value;
}

} /* extern "C" */
