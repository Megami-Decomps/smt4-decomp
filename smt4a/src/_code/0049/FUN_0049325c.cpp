/* NON_MATCHING: argument spills and override-dimension loads are scheduled differently. */
#include "gfx/SpriteVertexColors.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
void FUN_00492c98(u32 mode, u32 group, u32 id, s32 x, s32 y,
                  s32 width, s32 height, u32 first, u32 second);

void FUN_0049325c(u32 id, s32 x, s32 y, u32 first, u32 second)
{
    const TextureTableEntryIV *sprite = asdTMTexTableEntryAt(0x13, id);
    s32 width;
    s32 height;
    if ((sprite->placement) && (sprite->placement)->mode == 1) {
        width = (sprite->placement)->width;
        height = (sprite->placement)->height;
    } else {
        width = sprite->width & 0x7fff;
        height = sprite->height & 0x7fff;
    }
    FUN_00492c98(2, 0x13, id, x, y, width, height, first, second);
}
}
