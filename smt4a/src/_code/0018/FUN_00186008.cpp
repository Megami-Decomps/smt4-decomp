/* NON_MATCHING: only the two `movge` of the palette/magnitude selection are swapped (retail sets the palette first). */
#include "common.h"
#include <stdio.h>

extern "C" {
void statRowDrawValueImpl(u32 palette, s32 x, s32 y, u32 option0, u32 option1, u32 option2,
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
            sprintf(text, "-%d", magnitude);
        } else {
            sprintf(text, "+%d", magnitude);
        }
        statRowDrawValueImpl(palette, x, y, 0, 1, depth + 1, text);
    }
}
}
