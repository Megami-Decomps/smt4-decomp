#include "shard/ScreenRect.h"

extern "C" {

void texDrawCompositeSprite(s32 mode, s32 layer, u32 id, s32 x, s32 y, u32 flags);

/* Draws at the bottom-right corner of the rectangle, offset by (dx, dy). */
void uiRectDrawAtBottomRight(ScreenRect *rect, u32 id, s32 dx, s32 dy, u32 flags)
{
    s32 x = (s32)(rect->x + rect->width + dx);
    s32 y = (s32)(rect->y + rect->height + dy);

    texDrawCompositeSprite(2, rect->layer, id, x, y, flags);
}

} /* extern "C" */
