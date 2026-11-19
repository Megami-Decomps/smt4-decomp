#ifndef SMT4A_TEXT_DEBUG_TEXT_H
#define SMT4A_TEXT_DEBUG_TEXT_H

#include "common.h"

// Draw a Shift-JIS debug caption with a packed RGBA colour and independent opacity. The text comes last:
// every caller loads the opacity literal between the text and the colour moves.
extern "C" void debugDrawText(u32 color, f32 x, f32 y, f32 opacity, const char *text);

#endif
