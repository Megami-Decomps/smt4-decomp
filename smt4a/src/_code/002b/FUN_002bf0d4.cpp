/* NON_MATCHING: Texture region bounds and modulo-1000 selection are complete; preserved argument moves and signed-remainder instruction scheduling differ. */
#include "common.h"
#include "shard/W9_W9Match8_WorkRecords.h"
#include "util/AsdTMTexTableCallFileC.h"
#include "util/AsdTMTexTableCallFileC.h"

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
extern "C" void FUN_002bf0d4(u32 file, s32 region, TextureRegionBounds *bounds)
{
    if (bounds == NULL) {
        return;
    }
    TextureRegionFile *resource = reinterpret_cast<TextureRegionFile *>(asdTMTexTableCallFileC(file, region));
    const TextureRegion *entry = &resource->table->regions[region % 1000];
    bounds->top = entry->y;
    bounds->bottom = entry->y + (entry->height & 0x7fff);
    bounds->left = entry->x;
    bounds->right = entry->x + (entry->width & 0x7fff);
}
