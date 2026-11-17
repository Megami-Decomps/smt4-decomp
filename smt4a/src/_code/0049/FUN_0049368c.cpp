/* NON_MATCHING: argument register allocation prevents retail's paired stack store. */
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "shard/S1ListPanel.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
void FUN_00492c98(u32 mode, AsdTexture *texture, u32 image, s32 x, s32 y, u32 width, u32 height, u32 color, u32 flags);

void FUN_0049368c(const AsdTextureRegion *region, u32 image, s32 offsetX, s32 offsetY, u32 color, u32 flags)
{
    /* The region's texture field holds a texture-table file number here. */
    asdTMTexTableEntryAt(reinterpret_cast<u32>(region->texture), image);
    s32 x = (s32)(region->x + region->width + (f32)offsetX);
    s32 y = (s32)(region->y + region->height + (f32)offsetY);
    TextureTableEntryIV *info = asdTMTexTableEntryAt(reinterpret_cast<u32>(region->texture), image);
    u32 width;
    u32 height;
    if (info->placement != NULL && info->placement->mode == 1) {
        width = info->placement->width;
        height = info->placement->height;
    } else {
        width = info->width & 0xffff7fff;
        height = info->height & 0xffff7fff;
    }
    FUN_00492c98(2, region->texture, image, x, y, width, height, color, flags);
}
}
