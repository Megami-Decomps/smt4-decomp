/* NON_MATCHING: only the schedule of the category extent loads in the centers computation and two load registers of the origin sum differ; everything else is identical. */
#include "gamedata/MapNaviCategories.h"

/* One 8-byte position pair of the navigation display. */
struct NaviPoint {
    s32 x;
    s32 y;
};

/* The navigation work: a background texture and per-slot layout tables. */
struct NaviLayoutWork {
    u8 unk0000[0x1480];
    s32 textureIndex;           // 0x1480
    u8 unk1484[8];
    NaviPoint origins[32];      // 0x148C
    NaviPoint centers[32];      // 0x158C
    NaviPoint extents[32];      // 0x168C
    u8 unk178C[0x7B91 - 0x178C - 0];
    u8 layoutReady;             // 0x7B91
};

/* A data table 0x2E entry; only its map id and texture offset are used here. */
struct NaviMapEntry {
    u8 unk00[0x20];
    s16 mapId;                  // 0x20
    u8 unk22[8];
    s16 textureOffset;          // 0x2A
};

extern "C" {
s32 dataTable2ECount(void);
NaviMapEntry *dataTable2EGetEntry(s32 index);
s32 asdTMTexTableReleaseNode(s32 table, s32 node);
void FUN_0014afd0(s32 table, s32 index);
u8 *asdTMTexTableGetHeaderValue(s32 table, s32 index);
s32 MapNaviTable_GetCategoryCount(MapNaviTableContext *table);
MapNaviCategoryRecord *MapNaviTable_GetCategoryRecord(MapNaviTableContext *table, s32 index);
void FUN_0048e46c(NaviLayoutWork *work, s32 map);

/* Load the navigation background of a map and build each category slot's layout from the category table. */
void FUN_0048cee0(NaviLayoutWork *work, s32 map)
{
    s32 i;
    if (map == -1) {
        return;
    }
    if (work->textureIndex != 0) {
        asdTMTexTableReleaseNode(0x28, work->textureIndex);
        work->textureIndex = 0;
    }
    for (i = 0; i < dataTable2ECount(); i++) {
        NaviMapEntry *entry = dataTable2EGetEntry(i);
        if (entry->mapId == -1) {
            break;
        }
        if (entry->mapId == map) {
            work->textureIndex = entry->textureOffset + 1;
            break;
        }
    }
    FUN_0014afd0(0x28, work->textureIndex);
    *(u32 *)(asdTMTexTableGetHeaderValue(0x28, work->textureIndex) + 0x3c) = 1;
    for (i = 0; i < 32; i++) {
        work->origins[i].x = 0;
        work->origins[i].y = 0;
        work->centers[i].x = 0;
        work->centers[i].y = 0;
        work->extents[i].x = 0;
        work->extents[i].y = 0;
    }
    MapNaviTableContext table;
    for (i = 0; i < MapNaviTable_GetCategoryCount(&table); i++) {
        MapNaviCategoryRecord *record = MapNaviTable_GetCategoryRecord(&table, i);
        if (record->id == map) {
            work->origins[record->slot].x = record->placement.originX + record->placement.offsetX;
            work->origins[record->slot].y = record->placement.originY + record->placement.offsetY;
            work->centers[record->slot].x = record->placement.originX + (record->endX - record->startX) * 12 / 2;
            work->centers[record->slot].y = record->placement.originY + (record->endY - record->startY) * 12 / 2;
            work->extents[record->slot].x = record->startX;
            work->extents[record->slot].y = record->startY;
        }
    }
    FUN_0048e46c(work, map);
    work->layoutReady = 1;
}
}
