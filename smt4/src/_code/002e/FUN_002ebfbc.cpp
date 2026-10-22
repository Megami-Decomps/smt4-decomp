/* NON_MATCHING: interpolation endpoint comparisons and saved frame/value registers differ. */
#include "gfx/PulseAnimation.h"

extern "C" {

// Advance a thirty-frame brightness pulse and its near-endpoint display state.
void FUN_002ebfbc(PulseAnimation *pulse)
{
    s32 frame = pulse->frame;
    if (frame <= 15) {
        pulseInterpolate(pulse, 15, frame, 1.0f, 0.4f);
    } else {
        frame -= 15;
        pulseInterpolate(pulse, 15, frame, 0.4f, 1.0f);
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
