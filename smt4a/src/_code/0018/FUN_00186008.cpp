/* NON_MATCHING: guard, buffer clear and the palette/magnitude conditional moves match retail's order; the build shrink-wraps the guard (`cmp; bxeq lr` before the push) where retail pushes first and branches to a shared epilogue. */
#include "common.h"

extern "C" {
s32 textFormatBuffer(char *output, const char *format, ...);
void FUN_00180310(u32 palette, s32 x, s32 y, u32 option0, u32 option1, u32 option2,
                  const char *format, ...);

/* Draws a nonzero signed change ("+n" in palette 8, "-n" in palette 7) at a position. */
void FUN_00186008(s32 x, s32 y, s32 depth, s32 value)
{
    if (value != 0) {
        char text[64] = {0};
        u32 palette;
        s32 magnitude;
        if (value < 0) {
            palette = 7;
            magnitude = -value;
        } else {
            palette = 8;
            magnitude = value;
        }
        if (value < 0) {
            textFormatBuffer(text, "-%d", magnitude);
        } else {
            textFormatBuffer(text, "+%d", magnitude);
        }
        FUN_00180310(palette, x, y, 0, 1, depth + 1, text);
    }
}
}
