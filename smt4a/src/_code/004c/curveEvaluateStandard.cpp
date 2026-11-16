/* NON_MATCHING: retail loads the -20.0f y argument (vldr s1) after `mov r1, #1`; the build loads it before. */
#include "text/TextDraw.h"

extern "C" {
/* Draws `text` on `layer` in colour 1, 20 units up, and returns the drawn extent truncated to an integer. */
s32 curveEvaluateStandard(const char *text, u32 layer)
{
    return (s32)textDrawString(layer, 1, text, 0.0f, -20.0f, 0.0f, 0.0f, 1.0f);
}
}
