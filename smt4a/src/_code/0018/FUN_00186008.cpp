#include "common.h"
#include <stdio.h>

extern "C" {
void numberFontDrawFormatted(u32 palette, s32 x, s32 y, u32 option0, u32 option1, u32 option2,
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
        } else {
            palette = 8;
        }
        if (value < 0) {
            magnitude = -value;
        } else {
            magnitude = value;
        }
        if (value < 0) {
            sprintf(text, "-%d", magnitude);
        } else {
            sprintf(text, "+%d", magnitude);
        }
        numberFontDrawFormatted(palette, x, y, 0, 1, depth + 1, text);
    }
}
}
