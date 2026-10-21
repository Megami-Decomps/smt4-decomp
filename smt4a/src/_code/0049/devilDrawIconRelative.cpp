#include "shard/W6_W6Match2_OffsetPosition2D.h"

extern "C" {
void FUN_0018152c(u32 demon, s32 x, s32 y, u32 style, s32 highlight);

// Draw a demon icon at the local coordinates translated by its owner and offset.
void devilDrawIconRelative(const OffsetPosition2D *position, u32 demon, s32 x, s32 y, u32 style)
{
    s32 drawX = (s32)(position->x + position->offsetX + (f32)x);
    s32 drawY = (s32)(position->y + position->offsetY + (f32)y);
    FUN_0018152c(demon, drawX, drawY, style, 0);
}
}
