#include "gamedata/MapSaveBlockA.h"

namespace {
struct MapRegion {
    /* 0x00 */ f32 minX;
    /* 0x04 */ f32 unk04;
    /* 0x08 */ f32 minY;
    /* 0x0C */ f32 maxX;
    /* 0x10 */ f32 unk10;
    /* 0x14 */ f32 maxY;
    /* 0x18 */ u32 value;
    /* 0x1C */ s32 area;
};

struct MapRegionTable {
    /* 0x0000 */ MapRegion regions[200];
    /* 0x1900 */ s32 count;
};

}

extern "C" {

extern MapRegionTable DAT_00611874;

/* Find the region of an area (0 and 99 match any) that contains (x, y), remember it and return its value;
 * when none does, return the value of the last remembered region. */
u32 mapRegionLookupValue(s32 area, f32 x, f32 y)
{
    MapSaveBlockA *block = gameFlagsGetBlock();
    MapRegionTable *table = &DAT_00611874;

    for (s32 i = 0; i < table->count; ++i) {
        MapRegion *region = &table->regions[i];
        if ((region->area == area || area == 0 || area == 99) &&
            region->minX <= x && y >= region->minY && region->maxX >= x && y <= region->maxY) {
            block->currentZone = i;
            return region->value;
        }
    }
    return table->regions[block->currentZone].value;
}

} /* extern "C" */
