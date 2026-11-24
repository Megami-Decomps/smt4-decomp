#include "shard/S1ListPanel.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct SegmentedScrollbarAnchor {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 x;
};
extern "C" {
void texDrawTableEntrySized(s32 layer, u32 group, u32 sprite, s32 x, s32 y,
                  s32 width, s32 height, s32 priority);

/* Draws scrollbar backing, directional arrows, and the shortened movable thumb. */
void campCecViewDrawScrollTrack(SegmentedScrollbarAnchor *anchor, s32 x, s32 y, u32 upEnabled,
                 u32 downEnabled, s32 thumbActive, u32 style, s32 position, s32 count)
{
    s32 hiddenRows = count - 3;
    if (hiddenRows > 0) {
        texDrawTableEntryAtStoredOrigin(2, 46, 57, anchor->x + x, y, 100);
        texDrawTableEntryAtStoredOrigin(2, 46, 62, anchor->x + x, y, 100);
        s32 upArrow = upEnabled != 0 ? 60 : 58;
        texDrawTableEntryAtStoredOrigin(2, 46, upArrow, anchor->x + x, y, 101);
        s32 downArrow = downEnabled != 0 ? 61 : 59;
        texDrawTableEntryAtStoredOrigin(2, 46, downArrow, anchor->x + x, y, 101);
        u32 thumb = thumbActive != 0 ? 64 : 63;
        TextureTableEntryIV *sprite = asdTMTexTableEntryAt(46, thumb);
        s32 height = sprite->placement->height;
        s32 step = height / 32;
        texDrawTableEntrySized(2, 46, thumb, anchor->x + x, step * position + y,
            sprite->placement->width, height - step * hiddenRows, 101);
    }
}
}
