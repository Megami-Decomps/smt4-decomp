#pragma once
#include "common.h"

extern "C" {

/* Converts `text` to two-byte character codes in `out` (default 0x100-byte buffer when NULL, size 0 = 0x100)
 * and returns the default buffer. */
char *FUN_001654f8(const char *text, char *out, s32 size);

/* Draws the whole text at integer x/y with an 8-bit fade amount and a scale. */
void FUN_0025cc78(const void *text, s32 x, s32 y, s32 fade, f32 scale);

/* Sets the colour word of a text or sprite object (the low byte is cleared). */
void FUN_001527d8(u32 handle, u32 color);

/* Draws `text` on `layer` with a colour word at (x, y, z) with default scale 1.0 and zero offsets; width and
 * height are the two trailing float arguments. Returns the drawn extent (smt4). */
f32 textDrawString(u32 layer, u32 color, const char *text, f32 x, f32 y, f32 z, f32 width, f32 height);

/* smt4a's twin of textDrawString: same arguments and result (the drawn extent, left in s0). */
f32 textDrawString(u32 layer, u32 color, const char *text, f32 x, f32 y, f32 z, f32 width, f32 height);

} /* extern "C" */
