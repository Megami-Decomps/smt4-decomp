#include "common.h"

extern "C" {

extern u32 dataTableGetCount(u32 table);
extern int dataTableGetEntries(void);
extern u32 dataTableGet(u32 id, int index);

/* Address of record `index` (0xD0-byte records) of data table 0x33/(group+1), or 0 when out of range. */
int dataTable33GroupGetRecord(u32 unused, int group, u32 index)
{
    u32 table = dataTableGet(0x33, group + 1);
    int entries = dataTableGetEntries();
    u32 count = dataTableGetCount(table);

    if (index >= count) {
        entries = 0;
    } else {
        entries = entries + index * 0xd0;
    }
    return entries;
}

} /* extern "C" */
