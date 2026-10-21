/* NON_MATCHING: retail outlines the zero-duration path and branches back to the shared flag store; compiled code falls through. */
#include "shard/W6_W6Match3_ColorFade.h"

// Start an RGB fade, or apply the RGB value immediately for a zero duration.
extern "C" void FUN_003c149c(u32, ColorFadeWork* work, s32 duration, u32 color)
{
    work->rgbElapsed = 0;
    work->rgbDuration = duration;
    work->target = color & 0xffffff00;
    u32 flags = work->flags;
    if (duration != 0)
        flags |= 0x1000;
    work->start = work->color & 0xffffff00;
    if (duration == 0) {
        flags &= ~0x1000u;
        work->color = (work->color & 0xff) | (color & 0xffffff00);
    }
    work->flags = flags;
}
