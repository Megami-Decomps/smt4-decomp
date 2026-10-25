/* NON_MATCHING: first indicator state spills; retail retains it in fp, changing the remaining register allocation. */
#include "gfx/UiControlDraw.h"
#include "shard/TextureDrawCall.h"
#include "shard/S1ListPanel.h"

extern "C" {
SpriteInfo *FUN_001834a4(u32 group, u32 sprite);
void FUN_00185dd4(s32 layer, u32 group, u32 sprite, s32 x, s32 y, s32 width, s32 height, s32 priority);

/* Draw a scroll control with a caller-selected number of track subdivisions. */
void FUN_0039a1b8(UiControlDrawPosition *position, s32 x, s32 y,
                 u32 firstActive, u32 secondActive, u32 trackActive, u32 unused,
                 s32 firstRow, s32 rowCount, s32 subdivisions)
{
    s32 hiddenRows = rowCount - 11;
    FUN_001835b4(2, 0x2e, 0xf8, position->x + x, y, 100);
    FUN_001835b4(2, 0x2e, 0xf5, position->x + x, y, 100);
    FUN_001835b4(2, 0x2e, firstActive ? 0xf3 : 0xf1, position->x + x, y, 101);
    FUN_001835b4(2, 0x2e, secondActive ? 0xf4 : 0xf2, position->x + x, y, 101);
    u32 sprite = trackActive ? 0xf7 : 0xf6;
    s16 *size = FUN_001834a4(0x2e, sprite)->size;
    s32 height = size[1];
    s32 rowHeight = height / subdivisions;
    FUN_00185dd4(2, 0x2e, sprite, position->x + x, firstRow * rowHeight + y,
                 size[0], height - rowHeight * hiddenRows, 101);
}
}
