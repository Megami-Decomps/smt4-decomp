#include "gamedata/MapSystemTable.h"

extern "C" {

/* Map row `index` (MapSystemTable.tbb table 2), or NULL when out of range. */
MapSystemMapRecord *dataTable2EGetEntry(u32 index)
{
    void *table = dataTableGet(0x2E, 2);
    MapSystemMapRecord *entries = mapSystemMapRecords(table);
    u32 count = dataTableGetCount(table);

    if (index >= count) {
        return NULL;
    }
    return &entries[index];
}

} /* extern "C" */
