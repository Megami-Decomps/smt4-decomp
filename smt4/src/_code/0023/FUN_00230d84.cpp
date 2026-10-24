#include "shard/ScreenRect.h"

extern "C" {

void FUN_002bf288(s32 mode, s32 layer, u32 id, s32 x, s32 y, u32 flags);

/* Draws at the bottom-right corner of the rectangle, offset by (dx, dy). */
void FUN_00230d84(ScreenRect *rect, u32 id, s32 dx, s32 dy, u32 flags)
{
    s32 x = (s32)(rect->x + rect->width + dx);
    s32 y = (s32)(rect->y + rect->height + dy);

    FUN_002bf288(2, rect->layer, id, x, y, flags);
}

} /* extern "C" */
