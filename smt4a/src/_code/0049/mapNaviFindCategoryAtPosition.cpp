/* NON_MATCHING: interval math matches; comparison order and two fallback-search registers differ. */
#include "gamedata/MapNaviCategories.h"
extern "C" {
s32 MapNaviTable_GetCategoryCount(MapNaviTableContext *context);
MapNaviCategoryRecord *MapNaviTable_GetCategoryRecord(MapNaviTableContext *context, u32 index);

// Prefer a matching map category whose horizontal interval contains the coordinate.
MapNaviCategoryRecord *mapNaviFindCategoryAtPosition(const void *, s32 map, s32 section, f32, f32 coordinate, f32)
{
    MapNaviTableContext table;
    s32 count = MapNaviTable_GetCategoryCount(&table);
    MapNaviCategoryRecord *records = MapNaviTable_GetCategoryRecord(&table, 0);
    s32 index;
    for (index = 0; index < count; ++index) {
        MapNaviCategoryRecord *record = &records[index];
        if (record->id == -1)
            break;
        if (record->id == map && record->slot == section) {
            s32 last = record->horizontalInterval.last;
            f32 minimum = (f32)record->horizontalInterval.first * 100.0f;
            f32 maximum = (f32)last * 100.0f;
            minimum -= 50.0f;
            maximum -= 50.0f;
            if (map == 23) {
                if ((section == 1 || section == 2 || section == 3 || section == 6) && record->horizontalInterval.first == 8)
                    minimum -= 300.0f;
                if (section == 4) {
                    if (record->horizontalInterval.first == 5)
                        minimum -= 200.0f;
                    if (last == 2)
                        maximum += 100.0f;
                }
            }
            if (maximum > coordinate && coordinate > minimum)
                return &records[index];
        }
    }
    for (index = 0; index < count; ++index) {
        if (records[index].id == -1)
            return NULL;
        if (records[index].id == map && records[index].slot == section)
            return &records[index];
    }
    return NULL;
}
}
