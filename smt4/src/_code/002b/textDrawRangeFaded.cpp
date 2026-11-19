#include "common.h"
#include "font/TextLayoutApi.h"

// Draw a text range with integer coordinates and an 8-bit fade amount.
extern "C" void textDrawRangeFaded(const void* text, s32 x, s32 y, s32 fade,
                             u32 start, s32 length, f32 scale)
{
    textLayoutDraw(text, (f32)x, (f32)y, start, length,
                 (f32)(256 - fade) / 256.0f, scale);
}
