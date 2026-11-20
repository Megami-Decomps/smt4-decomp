#include "map/MapSelection.h"
#include "map/MapPlaceLookup.h"

extern "C" {

/* Selects the map (`map`, `area`, `variant`) and stores the table 23 value found for it. */
void mapPlaceSet(s32 map, s32 area, u32 variant)
{
    g_mapSelection.id = map;
    g_mapSelection.kind = area;
    g_mapSelection.counter = variant;
    g_mapSelection.flags = mapPlaceFind(map, area, variant);
}

} /* extern "C" */
