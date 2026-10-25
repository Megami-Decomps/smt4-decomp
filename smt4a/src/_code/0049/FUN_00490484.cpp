/* NON_MATCHING: stack frame layout differs (retail 1168 bytes: selected template, three 0x100-byte arrays and the four template copies at 80/72/72-byte strides; MapNaviTableContext is an empty placeholder here) and fp holds the work pointer */
#include "ui/NaviCategorySelection.h"
#include "gamedata/MapNaviCategories.h"

/* A category's template of nine reveal offsets (x, y pairs in thousandths of a cell). */
struct NaviRevealTemplate {
    f32 offsets[9][2];
};

/* An area record of the navigation table (only its id). */
struct NaviAreaRecord {
    /* 0x00 */ u32 id;
    /* 0x04 */ u8 unk04[0xc];
};

/* A screen position. */
struct NaviPosition {
    f32 x;
    f32 y;
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
void __aeabi_memcpy4(void *destination, const void *source, u32 bytes);

/* Reveals the cells of category `category` around `position` on the navigation map: each of the
   nine template offsets is moved to the category's start and every cell it lands in that is not
   yet known is discovered. */
void FUN_00490484(NaviCategorySelectionWork *work, u32 unused, u32 category, s32 cell, NaviPosition position)
{
    if (category == 0xffffffff) {
        return;
    }
    s32 start[32][2];
    s32 corner[32][2];
    s32 center[32][2];
    NaviRevealTemplate selected;
    NaviRevealTemplate variants[4];
    __aeabi_memcpy4(&variants[0], &DAT_005325d8, sizeof(NaviRevealTemplate));
    __aeabi_memcpy4(&variants[1], &DAT_00532620, sizeof(NaviRevealTemplate));
    __aeabi_memcpy4(&variants[2], &DAT_00532668, sizeof(NaviRevealTemplate));
    __aeabi_memcpy4(&variants[3], &DAT_005326b0, sizeof(NaviRevealTemplate));

    s8 type = 0;
    MapNaviTableContext categories;
    s32 categoryCount = MapNaviTable_GetCategoryCount(&categories);
    const MapNaviCategoryRecord *records = MapNaviTable_GetCategoryRecord(&categories, 0);
    for (s32 index = 0; index < categoryCount; index++) {
        if (records[index].id == -1) {
            break;
        }
        if (records[index].category == category) {
            const MapNaviCategoryRecord *record = &records[index];
            if (record != NULL) {
                type = (s8)record->reserved05;
            }
            break;
        }
    }

    MapNaviTableContext areas;
    s32 areaCount = MapNaviTable_GetAreaCount(&areas);
    NaviAreaRecord *areaRecords = MapNaviTable_GetAreaRecord(&areas, 0);
    s32 area = 0;
    while (area < areaCount && areaRecords[area].id != 0xffffffff && areaRecords[area].id != category) {
        area++;
    }

    if (type == 0) {
        __aeabi_memcpy4(&selected, &variants[0], sizeof(NaviRevealTemplate));
    } else if (type == 1) {
        __aeabi_memcpy4(&selected, &variants[1], sizeof(NaviRevealTemplate));
    } else if (type == 2) {
        __aeabi_memcpy4(&selected, &variants[2], sizeof(NaviRevealTemplate));
    } else if (type == 3) {
        __aeabi_memcpy4(&selected, &variants[3], sizeof(NaviRevealTemplate));
    } else {
        __aeabi_memcpy4(&selected, &variants[0], sizeof(NaviRevealTemplate));
    }

    for (s32 i = 0; i < 32; i++) {
        corner[i][0] = 0;
        corner[i][1] = 0;
        center[i][0] = 0;
        center[i][1] = 0;
        start[i][0] = 0;
        start[i][1] = 0;
    }
    MapNaviTableContext lookup;
    for (s32 index = 0; index < MapNaviTable_GetCategoryCount(&lookup); index++) {
        const MapNaviCategoryRecord *record = MapNaviTable_GetCategoryRecord(&lookup, index);
        if (record->category == category) {
            s32 slot = record->slot;
            corner[slot][0] = record->placement.originX + record->placement.offsetX;
            corner[slot][1] = record->placement.originY + record->placement.offsetY;
            center[slot][0] = (s32)((f32)record->placement.originX + (f32)(record->endX - record->startX) * 12.0f * 0.5f);
            center[slot][1] = (s32)((f32)record->placement.originY + (f32)(record->endY - record->startY) * 12.0f * 0.5f);
            start[slot][0] = record->startX;
            start[slot][1] = record->startY;
            break;
        }
    }

    for (s32 i = 0; i < 9; i++) {
        s32 x = (s32)((selected.offsets[i][0] + position.x) - (f32)start[cell][0] * 1000.0f) / 1000;
        s32 y = (s32)((selected.offsets[i][1] + position.y) - (f32)start[cell][1] * 1000.0f) / 1000;
        if (x >= 0 && y >= 0) {
            const MapNaviCategoryGrid *grid = &DAT_006172e4[category];
            if (x < grid->pitch && y < grid->height) {
                if (MapNavi_SetDiscoveredCell((s16)(grid->width * y + x + grid->firstCell), 1) != 0) {
                    work->discovered = 1;
                }
            }
        }
    }
}

} /* extern "C" */
