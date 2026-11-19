/* NON_MATCHING: parameters and the size lookup match; in the size lookup retail puts the width in r2 and the height in r0 and stores them separately, where this build uses r0/r1 and one strd. */
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "shard/S1ListPanel.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
void FUN_00230fe4(u32 mode, AsdTexture *texture, u32 image, s32 x, s32 y, u32 width, u32 height, u32 color, u32 flags);

void FUN_00231bcc(const AsdTextureRegion *region, u32 image, s32 offsetX, s32 offsetY, u32 color, u32 flags)
{
    /* The region's texture field holds a texture-table file number here. */
    asdTMTexTableEntryAt(reinterpret_cast<u32>(region->texture), image);
    s32 x = (s32)(region->x + region->width + (f32)offsetX);
    s32 y = (s32)(region->y + region->height + (f32)offsetY);
    u32 width;
    u32 height;
    asdTMTexTableEntrySize(reinterpret_cast<u32>(region->texture), image, &width, &height);
    FUN_00230fe4(2, region->texture, image, x, y, width, height, color, flags);
}
}
