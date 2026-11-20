/* NON_MATCHING (b1454): only the key-field load order (retail: start.frame, start.value, end.frame, end.value) and the integer/VFP registers of the final segment differ. */
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
        s32 nextIndex = track->index + distance;
        const EffectResourceKey *start = &track->keys[track->index];
        const EffectResourceKey *next = &track->keys[nextIndex];
        s32 frameCount = next->frame - start->frame;
        s32 valueChange = next->value - start->value;
        track->step = (f32)valueChange / (f32)frameCount;
        track->target = (f32)next->value;
        track->index = nextIndex;
        return;
    }
}
