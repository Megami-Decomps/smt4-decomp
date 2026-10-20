#include "common.h"

extern "C" {

extern u32 dataTableGetCount(u32 table);
extern int dataTableGetEntries(void);
extern u32 dataTableGet(u32 id, int index);

/* Address of record `index` (0x20-byte records) of the table pair for `group` in data table 0x26, or 0 when out of range. */
int dataTable26GroupGetRecord(u32 unused, int group, u32 index)
{
    u32 table = dataTableGet(0x26, group * 2 + 1);
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
