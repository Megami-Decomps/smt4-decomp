#include "common.h"

extern "C" {

extern u32 dataTableGetCount(u32 table);
extern int dataTableGetEntries(void);
extern u32 dataTableGet(u32 id, u32 index);

/* Address of record `index` (0x2c-byte records) of data table 0x2e/2, or 0 when out of range. */
int dataTable2eSub2GetRecord(u32 index)
{
    u32 table = dataTableGet(0x2e, 2);
    int entries = dataTableGetEntries();
    u32 count = dataTableGetCount(table);

    if (index >= count) {
        entries = 0;
    } else {
        entries = entries + index * 0x2c;
    }
    return entries;
}

} /* extern "C" */
