/* NON_MATCHING (b1454): only register allocation differs (retail keeps &source->keys[current] in r4 and the span in ip; built swaps them). */
#include "AsdSDK/Source/Gfx/Effect/EffectScalarKeys.h"

extern "C" {
// Skip zero-length segments and prepare the next scalar interpolation step.
void FUN_001dda40(EffectScalarKeyLegacyTrack *track, const EffectScalarKeyLegacySource *source)
{
    s32 step = 1;
    if (track->index >= 3)
        track->index = 4;
    s32 current = track->index;
    for (; current + step < 4; step++) {
        track->duration = source->keys[current + step].frame - source->keys[current].frame;
        if (track->duration > 0) {
            const EffectScalarKeyLegacy *from = &track->keys[current];
            const EffectScalarKeyLegacy *to = &track->keys[current + step];
            track->step = (to->value - from->value) / static_cast<f32>(to->frame - from->frame);
            track->target = to->value;
            track->index = static_cast<s8>(step + current);
            return;
        }
    }
}
}
