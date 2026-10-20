#include "common.h"

extern "C" {

void drawSetColorFromRGBA8(u32 color);

/* Compares `a` with `b`: sets a feedback colour (red when b < a, orange when a < b, white when equal) and returns -1, 1 or 0. */
s32 compareWithFeedbackColor(s32 a, s32 b)
{
    if (b < a) {
        drawSetColorFromRGBA8(0x72E027FF);
        return -1;
    }
    if (a < b) {
        drawSetColorFromRGBA8(0xDC0F14FF);
        return 1;
    }
    drawSetColorFromRGBA8(0xFFFFFFFF);
    return 0;
}

} /* extern "C" */
