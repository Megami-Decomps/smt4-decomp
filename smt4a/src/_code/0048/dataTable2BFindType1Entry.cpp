#include "gamedata/MapNaviCategories.h"
#include "gamedata/DataTableAccess_Smt4a.h"

extern "C" {

s32 dataTable2BType1Count(u32 *table);

/* Finds the icon record for the map and category, or returns NULL if absent. */
MapNaviMarkerIcon *dataTable2BFindType1Entry(const void *, s32 mapId, u32 category)
{
    u32 table;
    s32 count = dataTable2BType1Count(&table);
    MapNaviMarkerIcon *entries = (MapNaviMarkerIcon *)dataTable2BType1GetEntry((u32)&table, 0);

    for (s32 i = 0; i < count; i++) {
        if (entries[i].mapId == -1) {
            return NULL;
        }
        if (entries[i].mapId == mapId && entries[i].category == category) {
            return &entries[i];
        }
    }
    return NULL;
}

} /* extern "C" */
