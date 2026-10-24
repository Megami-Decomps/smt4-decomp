/* NON_MATCHING: category lookup matches logically; local owner-view addressing and register allocation differ. */
#include "gamedata/MapNaviCategories.h"
#include "shard/Shard0048.h"

extern "C" {
s32 MapNaviTable_GetCategoryCount(MapNaviTableContext *table);
MapNaviCategoryRecord *MapNaviTable_GetCategoryRecord(MapNaviTableContext *table, u32 index);
MapNaviMarkerIcon *dataTable2BFindType1Entry(Block66Owner *owner, s32 mapId, u8 category);
}

static inline MapNaviCategoryRecord *findCategory(MapNaviTableContext *table, s32 mapId, s32 section)
{
    s32 count = MapNaviTable_GetCategoryCount(table);
    MapNaviCategoryRecord *records = MapNaviTable_GetCategoryRecord(table, 0);
    for (s32 index = 0; index < count; ++index) {
        if (records[index].id == -1)
            break;
        if (records[index].id == mapId && (s16)records[index].reserved == section)
            return &records[index];
    }
    return NULL;
}

// Set a secondary marker from its category record, or clear an unused slot.
extern "C" void FUN_004883c8(Block66Owner *owner, s32 slot, s32 active, s32 mapId,
                  s32 section, u16 x, u32 unused, u16 y, s32 enabled)
{
    // A local view avoids increasing the alignment of the shared byte-only owner.
    struct MarkerOwnerView {
        u8 padding[0x3E6];
        MapNaviMarker markers[10];
    };
    MarkerOwnerView *view = reinterpret_cast<MarkerOwnerView *>(owner);
    if (active != 0) {
        MapNaviTableContext table;
        MapNaviCategoryRecord *record = findCategory(&table, mapId, section);
        MapNaviMarkerIcon *icon = dataTable2BFindType1Entry(owner, mapId, record->category);
        view->markers[slot].mapId = mapId;
        view->markers[slot].section = section;
        view->markers[slot].category = record->category;
        view->markers[slot].icon = icon->icon;
        if (enabled != 0)
            view->markers[slot].enabled = 1;
        else
            view->markers[slot].enabled = 0;
        view->markers[slot].x = x;
        view->markers[slot].y = y;
    } else {
        view->markers[slot].mapId = 0;
        view->markers[slot].section = 0;
        view->markers[slot].category = 0;
        view->markers[slot].icon = 0;
        view->markers[slot].enabled = 0;
        view->markers[slot].x = 0;
        view->markers[slot].y = 0;
        view->markers[slot].state = 0;
    }
}
