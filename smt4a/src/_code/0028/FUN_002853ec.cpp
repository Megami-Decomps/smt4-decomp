/* NON_MATCHING (b1454): only register allocation differs (retail keeps &source->keys[current] in r4 and the span in ip; built swaps them). */
#include "AsdSDK/Source/Gfx/Effect/EffectScalarKeys.h"

extern "C" {
// Skip zero-length segments and prepare the next scalar interpolation step.
void FUN_002853ec(EffectScalarKeyLegacyTrack *track, const EffectScalarKeyLegacySource *source)
{
    s32 step = 1;
    if (track->index >= 3)
        track->index = 4;
    s32 current = track->index;
    for (; current + step < 4; step++) {
        s32 span = source->keys[current + step].frame - source->keys[current].frame;
        track->duration = span;
        if (span > 0) {
            const EffectScalarKeyLegacy *from = &track->keys[current];
            s32 next = current + step;
            const EffectScalarKeyLegacy *to = &track->keys[next];
            track->step = (to->value - from->value) / static_cast<f32>(to->frame - from->frame);
            track->target = to->value;
            track->index = static_cast<s8>(current + step);
            break;
        }
    }
}
}
