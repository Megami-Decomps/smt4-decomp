#include "common.h"

extern "C" {

void FUN_00184e64(u32 color);

/* Compares `a` with `b`: sets a feedback colour (red when b < a, orange when a < b, white when equal) and returns -1, 1 or 0. */
s32 compareWithFeedbackColor(s32 a, s32 b)
{
    if (b < a) {
        FUN_00184e64(0x72E027FF);
        return -1;
    }
    if (a < b) {
        FUN_00184e64(0xDC0F14FF);
        return 1;
    }
    FUN_00184e64(0xFFFFFFFF);
    return 0;
}

} /* extern "C" */
