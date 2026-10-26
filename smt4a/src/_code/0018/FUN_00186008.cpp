/* NON_MATCHING: retail schedules the value compare and the palette/magnitude conditional moves around the buffer clear (flags live across the stores); the build compares after the first stores. */
#include "common.h"

extern "C" {
s32 textFormatBuffer(char *output, const char *format, ...);
void FUN_00180310(u32 palette, s32 x, s32 y, u32 option0, u32 option1, u32 option2,
                  const char *format, ...);

/* Draws a nonzero signed change ("+n" in palette 8, "-n" in palette 7) at a position. */
void FUN_00186008(s32 x, s32 y, s32 depth, s32 value)
{
    char text[64] = {0};
    if (value == 0) {
        return;
    }
    u32 palette = value < 0 ? 7 : 8;
    s32 magnitude = value < 0 ? -value : value;
    if (value < 0) {
        textFormatBuffer(text, "-%d", magnitude);
    } else {
        textFormatBuffer(text, "+%d", magnitude);
    }
    FUN_00180310(palette, x, y, 0, 1, depth + 1, text);
}
}
