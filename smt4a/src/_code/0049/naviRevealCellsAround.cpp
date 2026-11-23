/* NON_MATCHING: complete (298 raw / 254 shape lines). Retail clears the three cell arrays through one pointer each (`str [p]; str [p, #4]`, the build walks six), keeps the area table and the selected template in fp where the build keeps the fourth template, and its 1168-byte frame orders the templates 840/920/992/1064 with an unused 8-byte slot after the first; the cell index adds x to firstCell before the multiply-add. */
#include "ui/NaviCategorySelection.h"
#include "gamedata/MapNaviCategories.h"

/* A screen position. */
struct NaviPosition {
    f32 x;
    f32 y;
};

/* A category's template of nine reveal offsets (x, y pairs in thousandths of a cell). */
struct NaviRevealTemplate {
    NaviPosition offsets[9];
};

/* A cell position on the navigation grid. */
struct NaviCell {
    s32 x;
    s32 y;
};

/* An area record of the navigation table (only its id). */
struct NaviAreaRecord {
    /* 0x00 */ u32 id;
    /* 0x04 */ u8 unk04[0xc];
};

extern "C" {
extern const NaviRevealTemplate DAT_005325d8;
extern const NaviRevealTemplate DAT_00532620;
extern const NaviRevealTemplate DAT_00532668;
extern const NaviRevealTemplate DAT_005326b0;
extern const MapNaviCategoryGrid DAT_006172e4[];
s32 MapNaviTable_GetAreaCount(MapNaviTableContext *table);
NaviAreaRecord *MapNaviTable_GetAreaRecord(MapNaviTableContext *table, u32 index);
s32 MapNaviTable_GetCategoryCount(MapNaviTableContext *table);
const MapNaviCategoryRecord *MapNaviTable_GetCategoryRecord(MapNaviTableContext *table, u32 index);
s32 MapNavi_SetDiscoveredCell(s32 cell, s32 mode);

/* Finds the navigation category record of `category`: the table search retail inlines with its own context
   local, as findNaviCategory in naviApplyCategorySelection (FUN_004920d4 and FUN_0048e46c inline the same pair). */
static __inline const MapNaviCategoryRecord *naviFindCategoryRecord(u32 category)
{
    MapNaviTableContext table;
    s32 count = MapNaviTable_GetCategoryCount(&table);
    const MapNaviCategoryRecord *records = MapNaviTable_GetCategoryRecord(&table, 0);
    for (s32 index = 0; index < count; index++) {
        if (records[index].id == -1) {
            return NULL;
        }
        if (records[index].category == category) {
            return &records[index];
        }
    }
    return NULL;
}

/* Finds the navigation area record of `category`. */
static __inline NaviAreaRecord *naviFindAreaRecord(u32 category)
{
    MapNaviTableContext table;
    s32 count = MapNaviTable_GetAreaCount(&table);
    NaviAreaRecord *records = MapNaviTable_GetAreaRecord(&table, 0);
    for (s32 index = 0; index < count; index++) {
        if (records[index].id == 0xffffffff) {
            return NULL;
        }
        if (records[index].id == category) {
            return &records[index];
        }
    }
    return NULL;
}

/* Reveals the cells of category `category` around `position` on the navigation map: each of the
   nine template offsets is moved to the category's start and every cell it lands in that is not
   yet known is discovered. */
void naviRevealCellsAround(NaviCategorySelectionWork *work, u32 unused, u32 category, s32 cell, NaviPosition position)
{
    if (category == 0xffffffff) {
        return;
    }
    s32 i;
    NaviCell start[32];
    NaviCell corner[32];
    NaviCell center[32];
    NaviRevealTemplate selected;
    NaviRevealTemplate small = DAT_005325d8;
    NaviRevealTemplate medium = DAT_00532620;
    NaviRevealTemplate large = DAT_00532668;
    NaviRevealTemplate huge = DAT_005326b0;

    s8 type = 0;
    const MapNaviCategoryRecord *typeRecord = naviFindCategoryRecord(category);
    if (typeRecord != NULL) {
        type = (s8)typeRecord->reserved05;
    }
    /* Retail runs the area search and drops its result. */
    naviFindAreaRecord(category);

    switch (type) {
    case 0:
        selected = small;
        break;
    case 1:
        selected = medium;
        break;
    case 2:
        selected = large;
        break;
    case 3:
        selected = huge;
        break;
    default:
        selected = small;
        break;
    }

    for (i = 0; i < 32; i++) {
        corner[i].x = 0;
        corner[i].y = 0;
        center[i].x = 0;
        center[i].y = 0;
        start[i].x = 0;
        start[i].y = 0;
    }
    MapNaviTableContext table;
    for (i = 0; i < MapNaviTable_GetCategoryCount(&table); i++) {
        const MapNaviCategoryRecord *record = MapNaviTable_GetCategoryRecord(&table, i);
        if (record->category == category) {
            corner[record->slot].x = record->placement.originX + record->placement.offsetX;
            corner[record->slot].y = record->placement.originY + record->placement.offsetY;
            /* Retail finishes both extents and both halves before the first sum. */
            f32 width = (f32)(record->endX - record->startX) * 12.0f;
            f32 height = (f32)(record->endY - record->startY) * 12.0f;
            f32 halfWidth = width * 0.5f;
            f32 halfHeight = height * 0.5f;
            center[record->slot].x = (s32)((f32)record->placement.originX + halfWidth);
            center[record->slot].y = (s32)((f32)record->placement.originY + halfHeight);
            start[record->slot].x = record->startX;
            start[record->slot].y = record->startY;
            break;
        }
    }

    for (i = 0; i < 9; i++) {
        s32 x = (s32)((selected.offsets[i].x + position.x) - (f32)start[cell].x * 500.0f) / 1000;
        s32 y = (s32)((selected.offsets[i].y + position.y) - (f32)start[cell].y * 500.0f) / 1000;
        if (x >= 0 && y >= 0) {
            const MapNaviCategoryGrid *grid = &DAT_006172e4[category];
            if (x < grid->pitch && y < grid->height) {
                if (MapNavi_SetDiscoveredCell((s16)(x + grid->firstCell + grid->width * y), 1) != 0) {
                    work->discovered = 1;
                }
            }
        }
    }
}

} /* extern "C" */
