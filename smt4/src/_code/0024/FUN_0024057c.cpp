/* NON_MATCHING: retail outlines the zero-duration path and branches back to the shared flag store; compiled code falls through. */
#include "shard/W6_W6Match3_ColorFade.h"

// Start an alpha fade, or apply the alpha immediately when duration is zero.
extern "C" void FUN_0024057c(u32, ColorFadeWork* work, s32 duration, u32 alpha)
{
    work->alphaElapsed = 0;
    work->alphaDuration = duration;
    work->target = alpha & 0xff;
    u32 flags = work->flags;
    if (duration != 0)
        flags |= 0x2000;
    work->start = work->color & 0xff;
    if (duration == 0) {
        flags &= ~0x2000u;
        work->color = (work->color & 0xffffff00) | (alpha & 0xff);
    }
    work->flags = flags;
}
