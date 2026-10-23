/* NON_MATCHING: first indicator state spills to the stack; retail keeps it in fp. */
#include "gfx/UiControlDraw.h"
#include "shard/S1ListPanel.h"

extern "C" {
void FUN_002bf288(s32 layer, s32 group, u32 sprite, s32 x, s32 y, s32 priority);
SpriteInfo *FUN_002bf4f8(u32 group, u32 sprite);
void FUN_002b0750(s32 layer, s32 group, u32 sprite, s32 x, s32 y, s32 width, s32 height, s32 priority);

/* Draw the two directional indicators and the visible section of the scroll track. */
void FUN_00309ec8(UiControlDrawPosition *position, s32 x, s32 y,
                 s32 firstActive, s32 secondActive, s32 trackActive,
                 s32 unused, s32 firstRow, s32 rowCount)
{
    s32 hiddenRows = rowCount - 11;
    FUN_002bf288(2, 0x39, 0xf5, position->x + x, y, 0x6e);
    FUN_002bf288(2, 0x39, firstActive ? 0xf3 : 0xf1, position->x + x, y, 0x6f);
    FUN_002bf288(2, 0x39, secondActive ? 0xf4 : 0xf2, position->x + x, y, 0x6f);

    u32 trackSprite = trackActive ? 0xf7 : 0xf6;
    SpriteInfo *track = FUN_002bf4f8(0x39, trackSprite);
    s32 height = track->size[1];
    s32 rowHeight = height / 16;
    FUN_002b0750(2, 0x39, trackSprite, position->x + x,
                 rowHeight * firstRow + y, track->size[0],
                 height - rowHeight * hiddenRows, 0x6f);
}
}
