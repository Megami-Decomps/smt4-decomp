/* NON_MATCHING: only the load/subtract scheduling of the four signed extent bytes differs (the cell accumulation is firstCell + width * height). */
#include "gamedata/MapNaviCategories.h"
#include "shard/MapNaviTable_GetCategoryCount.h"

extern "C" {
extern MapNaviCategoryGrid DAT_004c3228[192];
const MapNaviCategoryRecord *MapNaviTable_GetCategoryRecord(MapNaviTableContext *table, s32 index);

void FUN_002f58e0(void)
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
        s16 width = static_cast<s16>((record->endX - record->startX + 1) / 2);
        s16 height = static_cast<s16>((record->endY - record->startY + 1) / 2);
        DAT_004c3228[record->category].width = width;
        DAT_004c3228[record->category].pitch = width;
        firstCell = static_cast<u16>(firstCell + width * height);
        DAT_004c3228[record->category].height = height;
    }
}
}
