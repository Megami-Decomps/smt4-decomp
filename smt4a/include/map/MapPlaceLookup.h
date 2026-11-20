#ifndef MAP_MAPPLACELOOKUP_H
#define MAP_MAPPLACELOOKUP_H

#include "map/MapSelection.h"
#include "shard/W6_W6Match2_AocTable23.h"

extern "C" {
Table23Record *dataTableGetRecord23(u32 index);
s32 dataTable23Type1CountWithAoc(void);
}

/* Look up the table 23 value for (map, area, variant), or -1 when there is none. */
static __inline u32 mapPlaceFind(s32 map, s32 area, u32 variant)
{
    if (variant != 0xffffffff) {
        for (s32 i = 0; i < dataTable23Type1CountWithAoc(); ++i) {
            const Table23Record *record = dataTableGetRecord23(i);
            if (record->key.category == map && record->key.subtype == area && record->key.variant == variant) {
                return record->key.value;
            }
        }
    }
    return 0xffffffff;
}

/* mapPlaceSet's body, which its callers inline: selects the map (`map`, `area`, `variant`) and stores the table 23
 * value found for it. */
static __inline void mapPlaceSelect(s32 map, s32 area, u32 variant)
{
    g_mapSelection.id = map;
    g_mapSelection.kind = area;
    g_mapSelection.counter = variant;
    g_mapSelection.flags = mapPlaceFind(map, area, variant);
}

#endif
