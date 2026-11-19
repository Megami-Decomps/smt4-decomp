#include "text/TextDraw.h"

extern "C" {
/* Draws `text` on `layer` in colour 1, 20 units up, and returns the drawn extent truncated to an integer. */
s32 textMeasureOnLayer(const char *text, u32 layer)
{
    return (s32)textDrawString(0.0f, -20.0f, 0.0f, layer, 0.0f, 1, 1.0f, text);
}
}
