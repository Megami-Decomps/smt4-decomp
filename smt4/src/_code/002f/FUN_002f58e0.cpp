/* NON_MATCHING: category-grid base hoisting, clear-counter registers and signed extent scheduling differ; 60 built and retail rows. */
#include "gamedata/MapNaviCategories.h"

extern "C" {
extern MapNaviCategoryGrid DAT_004c3228[192];
s32 MapNaviTable_GetCategoryCount(MapNaviTableContext *table);
const MapNaviCategoryRecord *MapNaviTable_GetCategoryRecord(MapNaviTableContext *table, s32 index);

void FUN_002f58e0(void)
{
    u16 firstCell = 0;
    MapNaviCategoryGrid *grid = DAT_004c3228;
    for (s32 remaining = 192; remaining; --remaining, ++grid) {
        grid->firstCell = 0;
        grid->width = 0;
        grid->pitch = 0;
        grid->height = 0;
    }
    MapNaviTableContext table;
    for (s32 index = 0; index < MapNaviTable_GetCategoryCount(&table); ++index) {
        const MapNaviCategoryRecord *record = MapNaviTable_GetCategoryRecord(&table, index);
        if (record->id == -1) {
            return;
        }
        DAT_004c3228[record->category].firstCell = firstCell;
        s16 width = static_cast<s16>((record->endX - record->startX + 1) / 2);
        s16 height = static_cast<s16>((record->endY - record->startY + 1) / 2);
        DAT_004c3228[record->category].width = width;
        DAT_004c3228[record->category].pitch = width;
        firstCell = static_cast<u16>(firstCell + width * height);
        DAT_004c3228[record->category].height = height;
    }
}
}
