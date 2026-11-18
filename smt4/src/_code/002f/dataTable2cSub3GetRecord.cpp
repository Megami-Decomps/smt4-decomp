#include "gamedata/DataTable.h"
#include "map/MapCollisionPlacement.h"

extern "C" {


/* Address of record `index` (0x14-byte records) of data table 0x2c/3, or 0 when out of range. */
MapCollisionPlacementRecord *dataTable2cSub3GetRecord(u32 index)
{
    void *table = dataTableGet(0x2c, 3);
    MapCollisionPlacementRecord *entries = static_cast<MapCollisionPlacementRecord *>(dataTableGetEntries(table));
    u32 count = dataTableGetCount(table);

    if (index >= count) {
        entries = 0;
    } else {
        entries = entries + index;
    }
    return entries;
}

} /* extern "C" */
