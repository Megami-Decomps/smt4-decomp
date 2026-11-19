#ifndef SMT4A_TEXT_DEBUG_TEXT_H
#define SMT4A_TEXT_DEBUG_TEXT_H

#include "common.h"

// Draw a Shift-JIS debug caption with a packed RGBA colour and independent opacity.
extern "C" void debugDrawText(u32 color, const char *text, f32 x, f32 y, f32 opacity);

#endif
