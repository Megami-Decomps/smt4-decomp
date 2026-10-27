#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct TextureRegion {
    /* 0x00 */ u16 x;
    /* 0x02 */ u16 y;
    /* 0x04 */ u16 width;
    /* 0x06 */ u16 height;
    /* 0x08 */ u8 unk08[0xc];
};
struct TextureRegionTable {
    /* 0x00 */ TextureRegion *regions;
};
struct TextureRegionFile {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ TextureRegionTable *table;
};
struct TextureRegionBounds {
    /* 0x00 */ s32 top;
    /* 0x04 */ s32 bottom;
    /* 0x08 */ s32 left;
    /* 0x0C */ s32 right;
};

/* Read the selected texture region's bounds, ignoring packed dimension flags. */
static void readBounds(u32 file, s32 region, TextureRegionBounds *bounds)
{
    TextureRegionFile *resource = reinterpret_cast<TextureRegionFile *>(asdTMTexTableCallFileC(file, region));
    TextureRegion *regions = resource->table->regions;
    const TextureRegion *entry = &regions[region % 1000];
    bounds->top = entry->y;
    bounds->bottom = entry->y + (entry->height & 0x7fff);
    bounds->left = entry->x;
    bounds->right = entry->x + (entry->width & 0x7fff);
}

/* Fills `bounds` from the texture region when a destination is given. */
extern "C" void textureRegionBoundsRead(u32 file, s32 region, TextureRegionBounds *bounds)
{
    if (bounds != NULL) {
        readBounds(file, region, bounds);
    }
}
