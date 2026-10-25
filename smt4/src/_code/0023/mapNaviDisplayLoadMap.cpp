/* NON_MATCHING: clear-loop counter reuse adds one row, and category-center load scheduling/GPR allocation differ; alternate optimization may explain these differences. */
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
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

struct MapNaviTextureRecord {
    u8 unk00[0x20];
    s16 map;
    u8 unk22[8];
    s16 textureIndex;
};

struct MapNaviCategoryRecord {
    s16 map;
    s16 category;
    u8 unk04[2];
    s8 minX;
    s8 minY;
    s8 maxX;
    s8 maxY;
    u8 unk0a[2];
    s16 originX;
    s16 originY;
    s16 offsetX;
    s16 offsetY;
};

// The accessor is stateless; its methods read table 0x2b, section 0.
struct MapNaviTable {};

extern "C" {
s32 dataTable2eSub2GetCount(void);
const MapNaviTextureRecord* dataTable2eSub2GetRecord(s32 index);
void asdTMTexTableReleaseNode(s32 table, s32 node);
TexNode* FUN_002c58c8(s32 table, s32 node);
const MapNaviCategoryRecord* MapNaviTable_GetCategoryRecord(const MapNaviTable* table, s32 index);
void FUN_0039d69c(MapNaviDisplay* display, s32 map);

void mapNaviDisplayLoadMap(MapNaviDisplay* display, s32 map)
{
    if (display->textureIndex != 0) {
        asdTMTexTableReleaseNode(0x33, display->textureIndex);
        display->textureIndex = 0;
    }

    for (s32 i = 0; i < dataTable2eSub2GetCount(); ++i) {
        const MapNaviTextureRecord* record = dataTable2eSub2GetRecord(i);
        if (record->map == -1) {
            break;
        }
        if (record->map == map) {
            display->textureIndex = record->textureIndex + 1;
            break;
        }
    }

    FUN_002c58c8(0x33, display->textureIndex);
    asdTMTexTableGetNodeTexture(0x33, display->textureIndex)->unk3c = 1;

    for (s32 i = 0; i < 32; ++i) {
        display->iconPositions[i].x = 0;
        display->iconPositions[i].y = 0;
        display->centers[i].x = 0;
        display->centers[i].y = 0;
        display->gridOrigins[i].x = 0;
        display->gridOrigins[i].y = 0;
    }

    MapNaviTable table;
    for (s32 i = 0; i < MapNaviTable_GetCategoryCount(&table); ++i) {
        const MapNaviCategoryRecord* record = MapNaviTable_GetCategoryRecord(&table, i);
        if (record->map == map) {
            display->iconPositions[record->category].x = record->originX + record->offsetX;
            display->iconPositions[record->category].y = record->originY + record->offsetY;
            const u32 width = (record->maxX - record->minX) * 12;
            const s32 height = (record->maxY - record->minY) * 12;
            display->centers[record->category].x = record->originX + width / 2;
            display->centers[record->category].y = record->originY + height / 2;
            display->gridOrigins[record->category].x = record->minX;
            display->gridOrigins[record->category].y = record->minY;
        }
    }

    FUN_0039d69c(display, map);
    display->ready = 1;
}
}
