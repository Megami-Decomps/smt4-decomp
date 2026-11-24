#include "gamedata/MapNaviCategories.h"
#include "shard/Shard0048.h"

extern "C" {
s32 MapNaviTable_GetCategoryCount(MapNaviTableContext *table);
MapNaviCategoryRecord *MapNaviTable_GetCategoryRecord(MapNaviTableContext *table, u32 index);
} /* extern "C" */

static inline MapNaviCategoryRecord *findCategory(s32 mapId, s32 section)
{
    MapNaviTableContext table;
    s32 count = MapNaviTable_GetCategoryCount(&table);
    MapNaviCategoryRecord *records = MapNaviTable_GetCategoryRecord(&table, 0);
    for (s32 index = 0; index < count; ++index) {
        if (records[index].id == -1)
            break;
        if (records[index].id == mapId && (s16)records[index].reserved == section)
            return &records[index];
    }
    return NULL;
}

// Set a primary marker from its category record, or clear an unused slot.
extern "C" void FUN_004882c0(Block66Owner *owner, s32 slot, s32 active, s32 mapId,
                  s32 section, u16 x, u32 unused, u16 y, s32 enabled)
{
    if (active != 0) {
        MapNaviCategoryRecord *record = findCategory(mapId, section);
        MapNaviMarkerIcon *icon = dataTable2BFindType1Entry(owner, mapId, record->category);
        owner->primaryMarkers[slot].mapId = mapId;
        owner->primaryMarkers[slot].section = section;
        owner->primaryMarkers[slot].category = record->category;
        owner->primaryMarkers[slot].icon = icon->icon;
        if (enabled != 0)
            owner->primaryMarkers[slot].enabled = 1;
        else
            owner->primaryMarkers[slot].enabled = 0;
        owner->primaryMarkers[slot].x = x;
        owner->primaryMarkers[slot].y = y;
    } else {
        owner->primaryMarkers[slot].mapId = 0;
        owner->primaryMarkers[slot].section = 0;
        owner->primaryMarkers[slot].category = 0;
        owner->primaryMarkers[slot].icon = 0;
        owner->primaryMarkers[slot].enabled = 0;
        owner->primaryMarkers[slot].x = 0;
        owner->primaryMarkers[slot].y = 0;
        owner->primaryMarkers[slot].state = 0;
    }
}
