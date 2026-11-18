#include "gamedata/DataTable.h"

extern "C" {


/* Address of record `index` (0x14-byte records) of data table 0x2c/3, or 0 when out of range. */
int dataTable2cSub3GetRecord(u32 index)
{
    void *table = dataTableGet(0x2c, 3);
    int entries = reinterpret_cast<int>(dataTableGetEntries(table));
    u32 count = dataTableGetCount(table);

    if (index >= count) {
        entries = 0;
    } else {
        entries = entries + index * 0x14;
    }
    return entries;
}

} /* extern "C" */
