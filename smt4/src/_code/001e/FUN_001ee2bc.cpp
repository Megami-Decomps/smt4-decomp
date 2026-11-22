/* NON_MATCHING (b1454): only the final segment differs: retail loads start.frame, start.value, end.frame, end.value and converts the value change into s0 (the build loads both frames first and swaps s0/s1). */
#include "AsdSDK/Source/Gfx/Effect/EffectResourceKeys.h"

extern "C" f32 effRandomSignedValue(s32, s32, s32);

// Find the next positive-duration key and interpolate its resource-adjusted value.
extern "C" void FUN_001ee2bc(EffectResourceKeyTrack *track,
                            const EffectResourceKeyTrack *source)
{
    if (track->index >= 3)
        track->index = 4;
    s32 current = track->index;
    for (s32 distance = 1; current + distance < 4; ++distance) {
        track->duration = source->keys[current + distance].frame - source->keys[current].frame;
        if (track->duration <= 0)
            continue;
        if (track->keys[current + distance].value != 0 &&
            track->keys[current + distance].resource > 0) {
            f32 adjustment = effRandomSignedValue(2, track->keys[current + distance].resource, 1);
            track->keys[track->index + distance].value -= (s32)adjustment;
        }
        s32 currentIndex = track->index;
        s32 nextIndex = currentIndex + distance;
        s32 frameCount = track->keys[nextIndex].frame - track->keys[currentIndex].frame;
        s32 valueChange = track->keys[nextIndex].value - track->keys[currentIndex].value;
        track->step = (f32)valueChange / (f32)frameCount;
        track->target = (f32)track->keys[nextIndex].value;
        track->index = nextIndex;
        return;
    }
}
