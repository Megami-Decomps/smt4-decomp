#include "common.h"

extern "C" {

extern u32 dataTableGetCount(u32 table);
extern int dataTableGetEntries(void);
extern u32 dataTableGet(u32 id, u32 index);

/* Address of record `index` (100-byte records, payload at +1) of data table 0x16/2, or 0 when out of range. */
int dataTable16Sub2GetRecordS64(u32 index)
{
    u32 table = dataTableGet(0x16, 2);
    int entries = dataTableGetEntries();
    u32 count = dataTableGetCount(table);

    if (index < count) {
        entries = entries + index * 100 + 1;
    } else {
        entries = 0;
    }
    return entries;
}

} /* extern "C" */
