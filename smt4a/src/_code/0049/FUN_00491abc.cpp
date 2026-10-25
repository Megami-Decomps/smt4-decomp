/* NON_MATCHING: interval math now matches unfused; register allocation differs (retail keeps the record table in r0 and the index in r1, built copies the table to r1 and puts the index in r2) and the constants load in a different order. */
#include "gamedata/MapNaviCategories.h"
extern "C" {
s32 MapNaviTable_GetCategoryCount(MapNaviTableContext *context);
MapNaviCategoryRecord *MapNaviTable_GetCategoryRecord(MapNaviTableContext *context, u32 index);

// Prefer a matching map category whose horizontal interval contains the coordinate.
MapNaviCategoryRecord *FUN_00491abc(u32 context, s32 map, s32 section, f32 unused, f32 coordinate)
{
    MapNaviTableContext table;
    s32 count = MapNaviTable_GetCategoryCount(&table);
    MapNaviCategoryRecord *records = MapNaviTable_GetCategoryRecord(&table, 0);
    struct IntervalView { u8 prefix[10]; s8 first, last; };
    typedef char IntervalOffsets[offsetof(IntervalView, first) == 10 && offsetof(IntervalView, last) == 11 ? 1 : -1];
    s32 index;
    for (index = 0; index < count; ++index) {
        MapNaviCategoryRecord *record = &records[index];
        if (record->id == -1)
            break;
        if (record->id == map && (s16)record->reserved == section) {
            IntervalView *interval = (IntervalView *)record;
            s32 first = interval->first;
            s32 last = interval->last;
            f32 minimum = (f32)first * 100.0f;
            f32 maximum = (f32)last * 100.0f;
            minimum -= 50.0f;
            maximum -= 50.0f;
            if (map == 23) {
                if ((section == 1 || section == 2 || section == 3 || section == 6) && first == 8)
                    minimum -= 300.0f;
                if (section == 4) {
                    if (first == 5)
                        minimum -= 200.0f;
                    if (last == 2)
                        maximum += 100.0f;
                }
            }
            if (coordinate > minimum && maximum > coordinate)
                return &records[index];
        }
    }
    for (index = 0; index < count; ++index) {
        if (records[index].id == -1)
            return NULL;
        if (records[index].id == map && (s16)records[index].reserved == section)
            return &records[index];
    }
    return NULL;
}
}
