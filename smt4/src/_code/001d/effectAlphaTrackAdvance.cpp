/* NON_MATCHING: the loop and stores match; the key-field loads and the two conversions for the step use a different schedule. */
#include "AsdSDK/Source/Gfx/Effect/EffectAlphaKeys.h"

/* Skip equal-time keys and set up interpolation toward the next alpha key. */
extern "C" void effectAlphaTrackAdvance(EffectAlphaKeyState *state, const EffectAlphaKey *source)
{
    s32 distance = 1;
    if (state->index >= 3) {
        state->index = 4;
    }
    s32 current = state->index;
    for (; current + distance < 4; ++distance) {
        const EffectAlphaKey *first = &source[current];
        const EffectAlphaKey *last = &source[current + distance];
        state->duration = last->frame - first->frame;
        if (state->duration > 0) {
            s32 frameSpan = state->keys[current + distance].frame - state->keys[current].frame;
            s32 alphaDelta = (s32)state->keys[current + distance].alpha - (s32)state->keys[current].alpha;
            state->step = (f32)alphaDelta / (f32)frameSpan;
            state->target = (f32)(u32)state->keys[current + distance].alpha;
            state->index = (s8)(current + distance);
            return;
        }
    }
}
