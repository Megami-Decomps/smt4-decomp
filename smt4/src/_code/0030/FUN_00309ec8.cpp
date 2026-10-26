/* NON_MATCHING: only the saved registers of the stacked arguments differ (retail pairs them as r7/r9 with the hidden-row count in r8; the build uses r8/r9 and r7). */
#include "gfx/UiControlDraw.h"
#include "shard/TextureDrawCall.h"
#include "shard/S1ListPanel.h"

extern "C" {
SpriteInfo *asdTMTexTableEntryAt(u32 group, u32 sprite);
void FUN_002b0750(s32 layer, s32 group, u32 sprite, s32 x, s32 y, s32 width, s32 height, s32 priority);

static __inline void indicatorDraw(UiControlDrawPosition *position, s32 x, s32 y, u32 sprite, s32 priority)
{
    FUN_002bf288(2, 0x39, sprite, position->x + x, y, priority);
}

/* Draw the two directional indicators and the visible section of the scroll track. */
void FUN_00309ec8(UiControlDrawPosition *position, s32 x, s32 y,
                 s32 firstActive, s32 secondActive, s32 trackActive,
                 s32 unused, s32 firstRow, s32 rowCount)
{
    s32 hiddenRows = rowCount - 11;
    indicatorDraw(position, x, y, 0xf5, 0x6e);
    indicatorDraw(position, x, y, firstActive ? 0xf3 : 0xf1, 0x6f);
    indicatorDraw(position, x, y, secondActive ? 0xf4 : 0xf2, 0x6f);

    u32 trackSprite = trackActive ? 0xf7 : 0xf6;
    SpriteInfo *track = asdTMTexTableEntryAt(0x39, trackSprite);
    s32 height = track->size[1];
    s32 rowHeight = height / 16;
    FUN_002b0750(2, 0x39, trackSprite, position->x + x,
                 rowHeight * firstRow + y, track->size[0],
                 height - rowHeight * hiddenRows, 0x6f);
}
}
