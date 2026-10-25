#include "common.h"
#include "shard/TextureDrawCall.h"

struct ScreenRect {
    f32 x;      // 0x00
    f32 y;      // 0x04
    f32 width;  // 0x08
    f32 height; // 0x0c
    u32 value;  // 0x10
};

extern "C" {


// Submit the rectangle's bottom-right corner, shifted by (dx, dy), together with its value.
void FUN_004934ac(ScreenRect *rect, u32 id, s32 dx, s32 dy, u32 extra)
{
    s32 x = (s32)(rect->x + rect->width + dx);
    s32 y = (s32)(rect->y + rect->height + dy);
    FUN_001835b4(2, rect->value, id, x, y, extra);
}

} /* extern "C" */
