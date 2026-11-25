/* NON_MATCHING: key field offsets now match; retail loads the first value before both frame loads,
 * and the subtraction, frame conversion and division use different VFP registers. */
#include "AsdSDK/Source/Gfx/Effect/EffectScalarKeys.h"

extern "C" {

/* Skips zero-length segments and prepares the next scalar interpolation step. */
void effScalarStateAdvance(EffectScalarKeyState *track, const EffectScalarKeySource *source)
{
    s32 step = 1;
    if (track->index >= 3) {
        track->index = 4;
    }
    for (; track->index + step < 4; step++) {
        s32 span = source->keys[track->index + step].frame - source->keys[track->index].frame;
        track->duration = span;
        if (span > 0) {
            s32 nextIndex = track->index + step;
            s32 frameCount = track->keys[nextIndex].frame - track->keys[track->index].frame;
            f32 valueChange = track->keys[nextIndex].value - track->keys[track->index].value;
            track->step = valueChange / (f32)frameCount;
            track->target = track->keys[nextIndex].value;
            track->index = (s8)nextIndex;
            break;
        }
    }
}

} /* extern "C" */
