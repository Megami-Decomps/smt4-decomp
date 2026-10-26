/* NON_MATCHING: scalar-key loop pointer allocation and VFP division registers differ. */
/* Advances to the next distinct scalar key frame and prepares its interpolation step. */
#include "AsdSDK/Source/Gfx/Effect/EffectScalarKeys.h"

extern "C" void FUN_001ee3dc(EffectScalarKeyState *state, const EffectScalarKeySource *source)
{
    if (state->index >= 3) {
        state->index = 4;
    }
    s32 current = state->index;
    for (s32 distance = 1; current + distance < 4; ++distance) {
        s32 next = current + distance;
        state->duration = source->keys[next].frame - source->keys[current].frame;
        if (state->duration > 0) {
            f32 frames = (f32)(state->keys[next].frame - state->keys[current].frame);
            state->step = (state->keys[next].value - state->keys[current].value) / frames;
            state->target = state->keys[next].value;
            state->index = next;
            return;
        }
    }
}
