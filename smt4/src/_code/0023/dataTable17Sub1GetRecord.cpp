#include "common.h"

extern "C" {

extern u32 dataTableGetCount(u32 table);
extern int dataTableGetEntries(void);
extern u32 dataTableGet(u32 id, u32 index);

/* Address of record `index` (0x68-byte records) of data table 0x17/1, or 0 when out of range. */
int dataTable17Sub1GetRecord(u32 unused, u32 index)
{
    u32 table = dataTableGet(0x17, 1);
    int entries = dataTableGetEntries();
    u32 count = dataTableGetCount(table);

    if (index >= count) {
        entries = 0;
    } else {
        entries = entries + index * 0x68;
    }
    return entries;
}

} /* extern "C" */
