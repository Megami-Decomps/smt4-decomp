#ifndef SMT4_FONT_TEXTLAYOUTAPI_H
#define SMT4_FONT_TEXTLAYOUTAPI_H
#include "common.h"

extern "C" {
/* Draw/layout at x, y with flags and a character limit, then depth and opacity
 * (the callers' schedules give this parameter order).
 * Returns the maximum line width. Mode 16 measures without drawing. */
f32 textLayoutDraw(const void *text, f32 x, f32 y, u32 flags, s32 limit, f32 depth, f32 opacity);
f32 FUN_002b0800(void *text, f32 x, f32 y, f32 depth, f32 opacity);
f32 effectSpawnDefaultArguments(void *text);
}
#endif
