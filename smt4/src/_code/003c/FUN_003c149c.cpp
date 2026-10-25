/* NON_MATCHING: the outlined zero-duration path and shared store now match; armcc loads work->color/flags before the compare instead of after it. */
#include "shard/W6_W6Match3_ColorFade.h"

// Start an RGB fade, or apply the RGB value immediately for a zero duration.
extern "C" void FUN_003c149c(u32, ColorFadeWork* work, s32 duration, u32 color)
{
    work->rgbElapsed = 0;
    work->rgbDuration = duration;
    work->target = color & 0xffffff00;
    work->start = work->color & 0xffffff00;
    if (duration == 0) {
        work->color = (work->color & 0xff) | (color & 0xffffff00);
        work->flags &= ~0x1000u;
    } else {
        work->flags |= 0x1000;
    }
}
