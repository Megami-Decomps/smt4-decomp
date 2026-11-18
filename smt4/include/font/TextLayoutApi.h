#ifndef SMT4_FONT_TEXTLAYOUTAPI_H
#define SMT4_FONT_TEXTLAYOUTAPI_H
#include "common.h"

extern "C" {
/* Draw/layout flags and a character limit, followed by x, y, depth and opacity.
 * Returns the maximum line width. Mode 16 measures without drawing. */
f32 FUN_002b080c(void *text, u32 flags, s32 limit, f32 x, f32 y, f32 depth, f32 opacity);
f32 FUN_002b0800(void *text, f32 x, f32 y, f32 depth, f32 opacity);
f32 effectSpawnDefaultArguments(void *text);
/* Measure the prefix ending at the supplied character index (mode 18). */
f32 FUN_00126830(void *text, s32 limit);
}
#endif
