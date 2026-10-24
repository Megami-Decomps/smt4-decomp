#include "common.h"

extern "C" {

u32 libc_strlen(const char *text);
void FUN_002b2b88(u32 second, u32 first, const char *text, u32 length, f32 x, f32 y, f32 z,
                  f32 scale, f32 offsetX, f32 offsetY, f32 width, f32 height);

// Forward a text draw request with its length and default scale (1.0) and zero offsets.
void FUN_002be5a4(u32 first, u32 second, const char *text, f32 x, f32 y, f32 z, f32 width, f32 height)
{
    f32 offset = 0.0f;
    u32 length = libc_strlen(text);
    FUN_002b2b88(second, first, text, length, x, y, z, 1.0f, offset, offset, width, height);
}

} /* extern "C" */
