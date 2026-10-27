#include "shard/W6_W6Match3_ColorFade.h"

// Start an RGB fade, or apply the RGB value immediately for a zero duration.
extern "C" void colorFadeStartRgb(u32, ColorFadeWork* work, s32 duration, u32 color)
{
    u32 flags = work->flags;

    work->rgbElapsed = 0;
    work->rgbDuration = duration;
    work->target = color & ~0xFF;
    work->start = work->color & ~0xFF;
    if (duration == 0) {
        flags &= ~0x1000;
        work->color = (work->color & 0xFF) | (color & ~0xFF);
    } else {
        flags |= 0x1000;
    }
    work->flags = flags;
}
