/* NON_MATCHING: the cell accumulation uses ip rather than r1 for the product-plus-offset. */
#include "gamedata/MapNaviCategories.h"
#include "shard/MapNaviTable_GetCategoryCount.h"

extern "C" {
extern MapNaviCategoryGrid DAT_004c3228[192];
const MapNaviCategoryRecord *MapNaviTable_GetCategoryRecord(MapNaviTableContext *table, s32 index);

void mapNaviCategoryGridBuild(void)
{
    u16 firstCell = 0;
    s32 index;
    for (index = 0; index < 192; ++index) {
        DAT_004c3228[index].firstCell = 0;
        DAT_004c3228[index].width = 0;
        DAT_004c3228[index].pitch = 0;
        DAT_004c3228[index].height = 0;
    }
    MapNaviTableContext table;
    for (index = 0; index < MapNaviTable_GetCategoryCount(&table); ++index) {
        const MapNaviCategoryRecord *record = MapNaviTable_GetCategoryRecord(&table, index);
        if (record->id == -1) {
            return;
        }
        DAT_004c3228[record->category].firstCell = firstCell;
        s32 spanX = record->endX - record->startX;
        s32 spanY = record->endY - record->startY;
        s16 width = (spanX + 1) / 2;
        s16 height = (spanY + 1) / 2;
        DAT_004c3228[record->category].width = width;
        DAT_004c3228[record->category].pitch = width;
        firstCell += width * height;
        DAT_004c3228[record->category].height = height;
    }
}
}
