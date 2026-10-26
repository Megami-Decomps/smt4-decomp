#ifndef GFX_PULSEANIMATION_H
#define GFX_PULSEANIMATION_H
#include "common.h"
#include <stddef.h>

struct PulseAnimation {
    f32 value; // 0x00
    s32 state; // 0x04
    u32 unk08; // 0x08
    s32 frame; // 0x0C
};
typedef char PulseAnimationLayoutCheck[sizeof(PulseAnimation) == 0x10 &&
    offsetof(PulseAnimation, frame) == 0xC ? 1 : -1];

extern "C" f32 mathInterpolateTimed(s32 duration, s32 frame, f32 start, f32 end);

// Clamp the final interpolation step in its travel direction.
static __inline void pulseInterpolate(PulseAnimation *pulse, s32 duration, s32 frame,
                                      f32 start, f32 target)
{
    bool atEnd = false;
    pulse->value = mathInterpolateTimed(duration, frame, start, target);
    if (frame == duration) {
        atEnd = true;
    }
    if (start > target) {
        if (pulse->value <= target || atEnd) {
            pulse->value = target;
        }
    } else {
        if (pulse->value >= target || atEnd) {
            pulse->value = target;
        }
    }
}

#endif
