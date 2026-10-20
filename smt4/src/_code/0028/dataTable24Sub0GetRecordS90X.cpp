#include "common.h"

extern "C" {

extern u32 dataTableGetCount(u32 table);
extern int dataTableGetEntries(void);
extern u32 dataTableGet(u32 id, u32 index);

/* First byte of record `index` (0x90-byte records) of data table 0x24/0, or 0xFFFFFFFF when out of range. */
u32 dataTable24Sub0GetRecordS90X(u32 index)
{
    u32 table = dataTableGet(0x24, 0);
    int entries = dataTableGetEntries();
    u32 count = dataTableGetCount(table);

    if (index >= count) {
        count = 0xffffffff;
    } else {
        count = *(u8 *)(entries + index * 0x90);
    }
    return count;
}

} /* extern "C" */
