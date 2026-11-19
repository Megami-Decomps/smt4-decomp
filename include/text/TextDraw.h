#pragma once
#include "common.h"

extern "C" {

/* Converts `text` to two-byte character codes in `out` (default 0x100-byte buffer when NULL, size 0 = 0x100)
 * and returns the default buffer. */
char *textExpandGlyphsToBuffer(const char *text, char *out, s32 size);

/* Draws the complete string with the current font at unit scale. */
void textDrawDefaultString(const char *text, f32 x, f32 y);

/* Draws the whole text at integer x/y with an 8-bit fade amount and a scale. */
void textDrawFaded(const void *text, s32 x, s32 y, s32 fade, f32 scale);

/* Sets the colour word of a text or sprite object (the low byte is cleared). */
void uiObjectSetColorRgb(u32 handle, u32 color);

/* Draws `text` on `layer` with a colour word at (x, y, z) with default scale 1.0 and zero offsets; width and
 * height are the last two float arguments. Returns the drawn extent (smt4). The parameter order is the one
 * retail's callers evaluate their arguments in (integers still go in r0-r2 as layer, color, text, floats in
 * s0-s4 as x, y, z, width, height). */
f32 textDrawString(f32 x, f32 y, f32 z, u32 layer, f32 width, u32 color, f32 height, const char *text);

/* smt4a's twin of textDrawString: same arguments and result (the drawn extent, left in s0). */
f32 textDrawString(f32 x, f32 y, f32 z, u32 layer, f32 width, u32 color, f32 height, const char *text);

} /* extern "C" */

#ifdef __cplusplus
extern "C" {
#endif

void effectSetByteSpeed(u32 speed);

#ifdef __cplusplus
}
#endif
