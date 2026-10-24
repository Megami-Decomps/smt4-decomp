#include "common.h"

extern "C" {

u32 wstrlen(const u16 *text);
void FUN_00181ae0(u32 second, u32 first, const u16 *text, u32 length, f32 x, f32 y, f32 z,
                  f32 scale, f32 offsetX, f32 offsetY, f32 width, f32 height);

// Forward a text draw request with its length and default scale (1.0) and zero offsets.
void FUN_00162790(u32 first, u32 second, const u16 *text, f32 x, f32 y, f32 z, f32 width, f32 height)
{
    f32 offset = 0.0f;
    u32 length = wstrlen(text);
    FUN_00181ae0(second, first, text, length, x, y, z, 1.0f, offset, offset, width, height);
}

} /* extern "C" */
