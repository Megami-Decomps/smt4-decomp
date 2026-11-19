#include "gfx/PulseAnimation.h"

extern "C" {

// Advance a thirty-frame brightness pulse and its near-endpoint display state.
void FUN_0036c7a8(PulseAnimation *pulse)
{
    s32 halfPeriod = 15;
    s32 frame = pulse->frame;
    if (frame <= halfPeriod) {
        pulseInterpolate(pulse, halfPeriod, frame, 1.0f, 0.4f);
    } else {
        pulseInterpolate(pulse, halfPeriod, frame - halfPeriod, 0.4f, 1.0f);
    }
    frame = pulse->frame;
    if (frame == 0 || (u32)(frame + 19) < 39) {
        pulse->state = 0;
    } else if ((u32)(frame + 29) < 59 || (u32)(frame + 9) < 19) {
        pulse->state = 2;
    }
    pulse->frame = frame + 1;
    if (pulse->frame > 30) {
        pulse->frame = 0;
    }
}
}
