/* NON_MATCHING: the early exit and loop rotation now match; retail keeps an explicit advance counter (add r3, r2) and different track-pointer registers. */
#include "AsdSDK/Source/Gfx/Effect/EffectScalarKeys.h"

extern "C" {
// Skip zero-length segments and prepare the next scalar interpolation step.
void FUN_001dda40(EffectScalarKeyLegacyTrack *track, const EffectScalarKeyLegacySource *source)
{
    if (track->index >= 3)
        track->index = 4;
    s32 current = track->index;
    for (s32 next = current + 1; next < 4; ++next) {
        track->duration = source->keys[next].frame - source->keys[current].frame;
        if (track->duration > 0) {
            f32 frames = static_cast<f32>(track->keys[next].frame - track->keys[current].frame);
            track->step = (track->keys[next].value - track->keys[current].value) / frames;
            track->target = track->keys[next].value;
            track->index = static_cast<s8>(next);
            return;
        }
    }
}
}
