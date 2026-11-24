/* NON_MATCHING: the cell accumulation uses ip rather than r1 for the product-plus-offset. */
#include "gamedata/MapNaviCategories.h"

extern "C" {
extern MapNaviCategoryGrid DAT_006172e4[300];
s32 MapNaviTable_GetCategoryCount(MapNaviTableContext *table);
const MapNaviCategoryRecord *MapNaviTable_GetCategoryRecord(MapNaviTableContext *table, s32 index);

void mapNaviCategoryGridBuild(void)
{
    u16 firstCell = 0;
    s32 index;
    for (index = 0; index < 300; ++index) {
        DAT_006172e4[index].firstCell = 0;
        DAT_006172e4[index].width = 0;
        DAT_006172e4[index].pitch = 0;
        DAT_006172e4[index].height = 0;
    }
    MapNaviTableContext table;
    for (index = 0; index < MapNaviTable_GetCategoryCount(&table); ++index) {
        const MapNaviCategoryRecord *record = MapNaviTable_GetCategoryRecord(&table, index);
        if (record->id == -1) {
            return;
        }
        DAT_006172e4[record->category].firstCell = firstCell;
        s32 spanX = record->endX - record->startX;
        s32 spanY = record->endY - record->startY;
        s16 width = (spanX + 1) / 2;
        s16 height = (spanY + 1) / 2;
        DAT_006172e4[record->category].width = width;
        DAT_006172e4[record->category].pitch = width;
        firstCell += width * height;
        DAT_006172e4[record->category].height = height;
    }
}
}
