/* NON_MATCHING: scalar-key iteration branches and track-pointer register allocation differ. */
#include "AsdSDK/Source/Gfx/Effect/EffectScalarKeys.h"

extern "C" {
// Skip zero-length segments and prepare the next scalar interpolation step.
void FUN_002853ec(EffectScalarKeyLegacyTrack *track, const EffectScalarKeyLegacySource *source)
{
    if (track->index > 2)
        track->index = 4;
    s32 current = track->index;
    for (s32 advance = 1; current + advance < 4; ++advance) {
        s32 next = current + advance;
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
