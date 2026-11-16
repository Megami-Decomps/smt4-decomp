/* NON_MATCHING: loop head matches (distance at top, first/last key pointers); remaining: retail keeps the from-key pointer in ip (r3 stays live) and loads from.frame into r3; the build swaps those two registers */
#include "AsdSDK/Source/Gfx/Effect/EffectAlphaKeys.h"

/* Skip equal-time keys and set up interpolation toward the next alpha key. */
extern "C" void FUN_00285320(EffectAlphaKeyState *state, const EffectAlphaKey *source)
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
            state->step = (f32)((s32)state->keys[current + distance].alpha - (s32)state->keys[current].alpha) /
                          (f32)(state->keys[current + distance].frame - state->keys[current].frame);
            state->target = (f32)(u32)state->keys[current + distance].alpha;
            state->index = (s8)(current + distance);
            return;
        }
    }
}
