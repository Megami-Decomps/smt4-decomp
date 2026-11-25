/* NON_MATCHING: retail loads each centre's destination slot before its origin and uses different scratch registers. */
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "gamedata/MapSystemTable.h"
#include "gamedata/MapNaviCategories.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "AsdSDK/TexTableLoaded.h"
#include "shard/MapNaviTable_GetCategoryCount.h"

struct MapNaviPoint {
    s32 x;
    s32 y;
};

struct MapNaviDisplay {
    u8 unk0000[0xb7c];
    s32 textureIndex;
    u8 unkb80[8];
    MapNaviPoint iconPositions[32];
    MapNaviPoint centers[32];
    MapNaviPoint gridOrigins[32];
    u8 unke88[0x4c05];
    u8 ready;
};

enum { MAP_NAVI_TILE_PIXELS = 12 };

/* The accessor is stateless; its methods read table 0x2B, section 0. */
struct MapNaviTable {};

extern "C" {
void asdTMTexTableReleaseNode(s32 table, s32 node);
TexNode* asdTMTexTablePrepareNodeImage(s32 table, s32 node);
const MapNaviCategoryRecord* MapNaviTable_GetCategoryRecord(const MapNaviTable* table, s32 index);
void FUN_0039d69c(MapNaviDisplay* display, s32 map);

/* Loads the navigation texture and calculates the grid and marker positions for the map. */
void mapNaviDisplayLoadMap(MapNaviDisplay* display, s32 map)
{
    s32 i;
    if (display->textureIndex != 0) {
        asdTMTexTableReleaseNode(0x33, display->textureIndex);
        display->textureIndex = 0;
    }

    for (i = 0; i < dataTable2eSub2GetCount(); ++i) {
        const MapSystemMapRecord* record = dataTable2eSub2GetRecord(i);
        if (record->mapId == -1) {
            break;
        }
        if (record->mapId == map) {
            display->textureIndex = record->textureIndex + 1;
            break;
        }
    }

    asdTMTexTablePrepareNodeImage(0x33, display->textureIndex);
    asdTMTexTableGetNodeTexture(0x33, display->textureIndex)->unk3c = 1;

    for (i = 0; i < 32; ++i) {
        display->iconPositions[i].x = 0;
        display->iconPositions[i].y = 0;
        display->centers[i].x = 0;
        display->centers[i].y = 0;
        display->gridOrigins[i].x = 0;
        display->gridOrigins[i].y = 0;
    }

    MapNaviTable table;
    for (i = 0; i < MapNaviTable_GetCategoryCount(&table); ++i) {
        const MapNaviCategoryRecord* record = MapNaviTable_GetCategoryRecord(&table, i);
        if (record->id == map) {
            display->iconPositions[record->slot].x = record->placement.originX + record->placement.offsetX;
            display->iconPositions[record->slot].y = record->placement.originY + record->placement.offsetY;
            s32 widthInTiles = record->endX - record->startX;
            s32 heightInTiles = record->endY - record->startY;
            MapNaviPoint centerOffset = {
                widthInTiles * MAP_NAVI_TILE_PIXELS / 2,
                heightInTiles * MAP_NAVI_TILE_PIXELS / 2
            };
            display->centers[record->slot].x = record->placement.originX + centerOffset.x;
            display->centers[record->slot].y = record->placement.originY + centerOffset.y;
            display->gridOrigins[record->slot].x = record->startX;
            display->gridOrigins[record->slot].y = record->startY;
        }
    }

    FUN_0039d69c(display, map);
    display->ready = 1;
}
} /* extern "C" */
