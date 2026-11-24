#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "shard/S1ListPanel.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
void FUN_00492c98(u32 mode, AsdTexture *texture, u32 image, s32 x, s32 y, u32 width, u32 height, u32 color, u32 flags);

/* Draws the table texture at the region's lower-right corner plus the given offset. */
void uiDrawSizedTextureAtRegionEnd(const AsdTextureRegion *region, u32 image, s32 offsetX, s32 offsetY, u32 color, u32 flags)
{
    /* The region's texture field holds a texture-table file number here. */
    asdTMTexTableEntryAt((u32)region->texture, image);
    s32 x = (s32)(region->x + region->width + (f32)offsetX);
    s32 y = (s32)(region->y + region->height + (f32)offsetY);
    u32 width;
    u32 height;
    asdTMTexTableEntrySize((u32)region->texture, image, &width, &height);
    FUN_00492c98(2, region->texture, image, x, y, width, height, color, flags);
}

} /* extern "C" */
