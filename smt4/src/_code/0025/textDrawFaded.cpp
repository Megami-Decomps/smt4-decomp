#include "common.h"
#include "font/TextLayoutApi.h"

// Draw the full text with integer coordinates and an 8-bit fade amount.
extern "C" void textDrawFaded(const void* text, s32 x, s32 y, s32 fade, f32 scale)
{
    textLayoutDraw(text, (f32)x, (f32)y, 0, -1, (f32)(256 - fade) / 256.0f, scale);
}
