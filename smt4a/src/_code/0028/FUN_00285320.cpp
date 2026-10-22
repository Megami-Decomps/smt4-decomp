/* NON_MATCHING: key-index core registers and signed-conversion VFP scheduling differ from retail. */
#include "AsdSDK/Source/Gfx/Effect/EffectAlphaKeys.h"

/* Skip equal-time keys and set up interpolation toward the next alpha key. */
extern "C" void FUN_00285320(EffectAlphaKeyState *state, const EffectAlphaKey *source)
{
    if (state->index >= 3) {
        state->index = 4;
    }
    s32 current = state->index;
    for (s32 distance = 1; current + distance < 4; ++distance) {
        state->duration = source[current + distance].frame - source[current].frame;
        if (state->duration > 0) {
            const EffectAlphaKey *from = &state->keys[current];
            const EffectAlphaKey *to = &state->keys[current + distance];
            state->step = (f32)((s32)to->alpha - (s32)from->alpha) /
                          (f32)(to->frame - from->frame);
            state->target = (f32)(u32)to->alpha;
            state->index = (s8)(current + distance);
            return;
        }
    }
}
