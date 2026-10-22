/* NON_MATCHING: scalar track traversal recovered; armcc peels the skipped-key loop and allocates different VFP temporaries. */
#include "AsdSDK/Source/Gfx/Effect/EffectScalarKeys.h"

extern "C" {
// Advance the scalar track to the next key with a positive frame interval.
void FUN_002a65fc(EffectScalarKeyTrack* state, const EffectScalarKeyTrack* source)
{
    if (state->index >= 3) {
        state->index = 4;
    }
    s32 skip = 1;
    s32 current = state->index;
    if (current + 1 >= 4) {
        return;
    }
    do {
        s32 next = current + skip;
        state->duration = source->keys[next].frame - source->keys[current].frame;
        if (state->duration > 0) {
            state->step = (state->keys[next].value - state->keys[current].value) /
                          (float)(state->keys[next].frame - state->keys[current].frame);
            state->target = state->keys[next].value;
            state->index = next;
            return;
        }
        ++skip;
    } while (current + skip < 4);
}
}
