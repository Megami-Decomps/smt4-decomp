#include "common.h"

extern "C" {

extern u32 dataTableGetCount(u32 table);
extern int dataTableGetEntries(void);
extern u32 dataTableGet(u32 id, int index);

/* Address of 0x20-byte record `index` of data table 0x26/(group * 2), or 0 when out of range. */
int dataTable26GroupGetRecordS2(u32 unused, int group, u32 index)
{
    u32 table = dataTableGet(0x26, group << 1);
    int entries = dataTableGetEntries();
    u32 count = dataTableGetCount(table);

    if (index >= count) {
        entries = 0;
    } else {
        entries = entries + index * 0x20;
    }
    return entries;
}

} /* extern "C" */
