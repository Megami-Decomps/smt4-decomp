#include "gamedata/DataTable.h"
#include "map/MapZoneLabels.h"

extern "C" {


/* Zone label `index` in table0x2c/2 (32-byte string slots), or null out of range. */
const char *dataTable2cSub2GetRecord(u32 index)
{
    void *table = dataTableGet(0x2c, 2);
    const char *entries = static_cast<const char *>(dataTableGetEntries(table));
    u32 count = dataTableGetCount(table);

    if (index >= count) {
        entries = 0;
    } else {
        entries = entries + index * 0x20;
    }
    return entries;
}

} /* extern "C" */
