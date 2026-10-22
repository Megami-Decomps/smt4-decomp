/* NON_MATCHING: argument spills and override-dimension loads are scheduled differently. */
#include "shard/S1ListPanel.h"

extern "C" {
const SpriteInfo *FUN_001834a4(u32 group, u32 id);
void FUN_00492c98(u32 mode, u32 group, u32 id, s32 x, s32 y,
                  s32 width, s32 height, u32 first, u32 second);

void FUN_0049325c(u32 id, s32 x, s32 y, u32 first, u32 second)
{
    const SpriteInfo *sprite = FUN_001834a4(0x13, id);
    s32 width;
    s32 height;
    if (sprite->size && sprite->size[2] == 1) {
        width = sprite->size[0];
        height = sprite->size[1];
    } else {
        width = sprite->bounds.width & 0x7fff;
        height = sprite->bounds.height & 0x7fff;
    }
    FUN_00492c98(2, 0x13, id, x, y, width, height, first, second);
}
}
