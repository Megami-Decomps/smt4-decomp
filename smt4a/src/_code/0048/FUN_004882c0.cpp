#include "gamedata/MapNaviCategories.h"
#include "shard/Shard0048.h"

extern "C" {
s32 MapNaviTable_GetCategoryCount(MapNaviTableContext *table);
MapNaviCategoryRecord *MapNaviTable_GetCategoryRecord(MapNaviTableContext *table, u32 index);
MapNaviMarkerIcon *dataTable2BFindType1Entry(Block66Owner *owner, s32 mapId, u8 category);
}

/* The marker slots lie past the shared byte-only owner; a local view avoids increasing its alignment. */
struct MarkerOwnerView {
    u8 padding[0x66];
    MapNaviMarker markers[16];
};

static inline MarkerOwnerView *markerView(Block66Owner *owner)
{
    return reinterpret_cast<MarkerOwnerView *>(owner);
}

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
        markerView(owner)->markers[slot].mapId = mapId;
        markerView(owner)->markers[slot].section = section;
        markerView(owner)->markers[slot].category = record->category;
        markerView(owner)->markers[slot].icon = icon->icon;
        if (enabled != 0)
            markerView(owner)->markers[slot].enabled = 1;
        else
            markerView(owner)->markers[slot].enabled = 0;
        markerView(owner)->markers[slot].x = x;
        markerView(owner)->markers[slot].y = y;
    } else {
        markerView(owner)->markers[slot].mapId = 0;
        markerView(owner)->markers[slot].section = 0;
        markerView(owner)->markers[slot].category = 0;
        markerView(owner)->markers[slot].icon = 0;
        markerView(owner)->markers[slot].enabled = 0;
        markerView(owner)->markers[slot].x = 0;
        markerView(owner)->markers[slot].y = 0;
        markerView(owner)->markers[slot].state = 0;
    }
}
