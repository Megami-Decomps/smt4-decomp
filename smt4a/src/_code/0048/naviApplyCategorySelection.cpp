#include "shard/W6_W6Match7_NumericStepper.h"
#include "ui/NaviCategorySelection.h"
#include "gamedata/MapNaviCategories.h"

extern "C" {
MapNaviMarkerIcon *dataTable2BFindType1Entry(NaviCategorySelectionWork *, s32, u32);
s32 naviMainSelectPair(void *);
s32 MapNaviTable_GetCategoryCount(MapNaviTableContext *); // declcheck: local (the shared declaration does not compile here or changes this unit)
const MapNaviCategoryRecord *MapNaviTable_GetCategoryRecord(MapNaviTableContext *, u32);

/* Finds the navigation category record matching the given map and section (same helper as smt4
 * naviApplyCategorySelection and naviSetMapSlot). */
static __inline const MapNaviCategoryRecord *findNaviCategory(s32 map, s32 section)
{
    MapNaviTableContext table;
    s32 count = MapNaviTable_GetCategoryCount(&table);
    const MapNaviCategoryRecord *records = MapNaviTable_GetCategoryRecord(&table, 0);
    for (s32 index = 0; index < count; ++index) {
        if (records[index].id == -1) {
            return NULL;
        }
        if (records[index].id == map && (s16)records[index].reserved == section) {
            return &records[index];
        }
    }
    return NULL;
}

/* Selects the requested marker category, falling back to the map's default category. */
void naviApplyCategorySelection(NaviCategorySelectionWork *work, u32 category)
{
    s32 map = naviGetActiveStateValue(work->scene);
    s32 section = naviMainSelectPair(work->scene);
    MapNaviMarkerIcon *marker = dataTable2BFindType1Entry(work, map, category);
    if (marker != NULL) {
        s8 icon = (s8)marker->icon;
        work->selection = icon;
        work->selectedIcon = icon;
        work->refresh[0] = 1;
        work->refresh[1] = 1;
    } else {
        work->selection = 0;
        const MapNaviCategoryRecord *record = findNaviCategory(map, section);
        if (record == NULL) {
            return;
        }
        marker = dataTable2BFindType1Entry(work, map, record->category);
        if (marker == NULL) {
            return;
        }
        s8 icon = (s8)marker->icon;
        work->selection = icon;
        work->selectedIcon = icon;
        work->refresh[0] = 1;
        work->refresh[1] = 1;
    }
}
} /* extern "C" */
