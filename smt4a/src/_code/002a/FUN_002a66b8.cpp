/* NON_MATCHING: key-search loop lowering and final interpolation register allocation differ. */
#include "AsdSDK/Source/Gfx/Effect/EffectResourceKeys.h"

extern "C" f32 FUN_002039d0(s32, s32, s32);

// Find the next positive-duration key and interpolate its resource-adjusted value.
extern "C" void FUN_002a66b8(EffectResourceKeyTrack *track,
                            const EffectResourceKeyTrack *source)
{
    s32 distance = 1;
    if (track->index >= 3)
        track->index = 4;
    s32 current = track->index;
    if (current + 1 < 4) {
        while ((track->duration = source->keys[current + distance].frame -
                                 source->keys[current].frame) <= 0) {
            ++distance;
            if (current + distance >= 4)
                return;
        }
        if (track->keys[current + distance].value != 0 &&
            track->keys[current + distance].resource > 0) {
            f32 adjustment = FUN_002039d0(2, track->keys[current + distance].resource, 1);
            track->keys[track->index + distance].value -= (s32)adjustment;
        }
        s32 nextIndex = track->index + distance;
        const EffectResourceKey *previous = &track->keys[track->index];
        const EffectResourceKey *next = &track->keys[nextIndex];
        f32 duration = (f32)(next->frame - previous->frame);
        f32 difference = (f32)(next->value - previous->value);
        track->step = difference / duration;
        track->target = (f32)next->value;
        track->index = nextIndex;
    }
}
