#ifndef SMT4_FONT_TEXTLAYOUTAPI_H
#define SMT4_FONT_TEXTLAYOUTAPI_H
#include "common.h"

extern "C" {
/* Draw/layout flags and a selected line index, followed by x, y, depth and opacity.
 * Flag 2 restricts drawing/measurement to that line; otherwise the index is ignored.
 * Returns the maximum eligible line width. Flag 16 measures without drawing. */
f32 FUN_002b080c(void *text, u32 flags, s32 selectedLine, f32 x, f32 y, f32 depth, f32 opacity);
f32 FUN_002b0800(void *text, f32 x, f32 y, f32 depth, f32 opacity);
f32 effectSpawnDefaultArguments(void *text);
/* Measure the selected line without drawing (flags 16 | 2). */
f32 FUN_00126830(void *text, s32 selectedLine);
}
#endif
