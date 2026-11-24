/* NON_MATCHING: the segment frame and value loads are scheduled differently, and the step's subtract/convert/divide use different VFP registers. */
#include "AsdSDK/Source/Gfx/Effect/EffectScalarKeys.h"

extern "C" {
/* Skips zero-length segments and prepares the next scalar interpolation step. */
void effScalarTrackAdvance(EffectScalarKeyTrack *track, const EffectScalarKeyTrack *source)
{
    s32 step = 1;
    if (track->index >= 3)
        track->index = 4;
    s32 current = track->index;
    for (; current + step < 4; step++) {
        s32 span = source->keys[current + step].frame - source->keys[current].frame;
        track->duration = span;
        if (span > 0) {
            const EffectScalarTrackKey *from = &track->keys[current];
            s32 next = current + step;
            const EffectScalarTrackKey *to = &track->keys[next];
            s32 frames = to->frame - from->frame;
            track->step = (to->value - from->value) / frames;
            track->target = to->value;
            track->index = static_cast<s8>(current + step);
            break;
        }
    }
}
}
