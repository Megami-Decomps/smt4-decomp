/* NON_MATCHING: argument register allocation prevents retail's paired stack store. */
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "shard/S1ListPanel.h"

extern "C" {
SpriteInfo *asdTMTexTableEntryAt(AsdTexture *texture, u32 image);
void FUN_00230fe4(u32 mode, AsdTexture *texture, u32 image, s32 x, s32 y, u32 width, u32 height, u32 color, u32 flags);

void FUN_00231bcc(const AsdTextureRegion *region, u32 image, s32 offsetX, s32 offsetY, u32 color, u32 flags)
{
    asdTMTexTableEntryAt(region->texture, image);
    s32 x = (s32)(region->x + region->width + (f32)offsetX);
    s32 y = (s32)(region->y + region->height + (f32)offsetY);
    SpriteInfo *info = asdTMTexTableEntryAt(region->texture, image);
    u32 width;
    u32 height;
    if (info->size != NULL && info->size[2] == 1) {
        width = info->size[0];
        height = info->size[1];
    } else {
        width = info->bounds.width & 0xffff7fff;
        height = info->bounds.height & 0xffff7fff;
    }
    FUN_00230fe4(2, region->texture, image, x, y, width, height, color, flags);
}
}
