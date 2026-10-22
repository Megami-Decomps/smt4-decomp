/* NON_MATCHING: retail tests value after the prologue and before clearing the buffer, and selects
 * the palette and magnitude with conditional moves; this build clears first and branches. */
#include "common.h"

extern "C" {
s32 textFormatBuffer(char *output, const char *format, ...);
void FUN_00180310(u32 palette, s32 x, s32 y, u32 option0, u32 option1, u32 option2,
                  const char *format, ...);

/* Draws a nonzero signed change ("+n" in palette 8, "-n" in palette 7) at a position. */
void FUN_00186008(s32 x, s32 y, s32 depth, s32 value)
{
    char text[64] = {0};
    u32 palette;
    if (value == 0) {
        return;
    }
    if (value < 0) {
        palette = 7;
        textFormatBuffer(text, "-%d", -value);
    } else {
        palette = 8;
        textFormatBuffer(text, "+%d", value);
    }
    FUN_00180310(palette, x, y, 0, 1, depth + 1, text);
}
}
