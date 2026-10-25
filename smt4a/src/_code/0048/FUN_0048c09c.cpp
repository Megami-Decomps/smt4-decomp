/* NON_MATCHING: scene address is evaluated before map lookup; selection and refresh-address registers and result moves still differ. */
#include "ui/NaviCategorySelection.h"
#include "gamedata/MapNaviCategories.h"

extern "C" {
MapNaviMarkerIcon *dataTable2BFindType1Entry(NaviCategorySelectionWork *, s32, u32);
s32 naviGetActiveStateValue(void);
s32 naviMainSelectPair(void *);
s32 MapNaviTable_GetCategoryCount(MapNaviTableContext *);
const MapNaviCategoryRecord *MapNaviTable_GetCategoryRecord(MapNaviTableContext *, u32);

// Select the requested marker category, falling back to the map's default category.
void FUN_0048c09c(NaviCategorySelectionWork *work, u32 category)
{
    void *scene = work->scene;
    s32 map = naviGetActiveStateValue();
    s32 section = naviMainSelectPair(scene);
    MapNaviMarkerIcon *marker = dataTable2BFindType1Entry(work, map, category);
    if (marker) {
        s8 icon = (s8)marker->icon;
        work->selection = icon;
        work->selectedIcon = icon;
        work->refreshFirst = 1;
        work->refreshSecond = 1;
    } else {
        work->selection = 0;
        MapNaviTableContext table;
        s32 count = MapNaviTable_GetCategoryCount(&table);
        const MapNaviCategoryRecord *records = MapNaviTable_GetCategoryRecord(&table, 0);
        for (s32 index = 0; index < count; ++index) {
            if (records[index].id == -1)
                return;
            if (records[index].id == map && (s16)records[index].reserved == section) {
                const MapNaviCategoryRecord *record = &records[index];
                if (!record)
                    return;
                marker = dataTable2BFindType1Entry(work, map, record->category);
                if (!marker)
                    return;
                s8 icon = (s8)marker->icon;
                work->selection = icon;
                work->selectedIcon = icon;
                work->refreshFirst = 1;
                work->refreshSecond = 1;
                break;
            }
        }
    }
}
}
