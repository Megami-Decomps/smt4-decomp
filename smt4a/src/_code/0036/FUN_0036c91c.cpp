/* NON_MATCHING: The upper-arrow flag load and group argument are scheduled around stack stores differently. */
#include "shard/S1ListPanel.h"
#include "shard/TextureDrawCall.h"

struct SegmentedScrollbarAnchor {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 x;
};
extern "C" {
SpriteInfo *asdTMTexTableEntryAt(u32 group, u32 sprite);
void FUN_00185dd4(s32 layer, u32 group, u32 sprite, s32 x, s32 y,
                  s32 width, s32 height, s32 priority);

/* Draws scrollbar backing, directional arrows, and the shortened movable thumb. */
void FUN_0036c91c(SegmentedScrollbarAnchor *anchor, s32 x, s32 y, u32 upEnabled,
                 u32 downEnabled, s32 thumbActive, u32 style, s32 position, s32 count)
{
    s32 hiddenRows = count - 3;
    if (hiddenRows > 0) {
        FUN_001835b4(2, 46, 57, anchor->x + x, y, 100);
        FUN_001835b4(2, 46, 62, anchor->x + x, y, 100);
        FUN_001835b4(2, 46, upEnabled != 0 ? 60 : 58, anchor->x + x, y, 101);
        FUN_001835b4(2, 46, downEnabled != 0 ? 61 : 59, anchor->x + x, y, 101);
        u32 thumb = thumbActive != 0 ? 64 : 63;
        SpriteInfo *sprite = asdTMTexTableEntryAt(46, thumb);
        s32 height = sprite->size[1];
        s32 step = height / 32;
        FUN_00185dd4(2, 46, thumb, anchor->x + x, step * position + y,
            sprite->size[0], height - step * hiddenRows, 101);
    }
}
}
