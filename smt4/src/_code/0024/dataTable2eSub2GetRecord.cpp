#include "gamedata/MapSystemTable.h"

extern "C" {

/* Map row `index` (MapSystemTable.tbb table 2), or NULL when out of range. */
MapSystemMapRecord *dataTable2eSub2GetRecord(u32 index)
{
    void *table = dataTableGet(0x2e, 2);
    MapSystemMapRecord *entries = mapSystemMapRecords(table);
    u32 count = dataTableGetCount(table);

    if (index >= count) {
        entries = NULL;
    } else {
        entries = entries + index;
    }
    return entries;
}

} /* extern "C" */
