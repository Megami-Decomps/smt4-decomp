/* NON_MATCHING: binding load is hoisted before the mode write and zero is reused across part stores; retail reloads/re-materializes it. */
#include "shard/W6_W6Match2_AnimationVisualState.h"

extern "C" void animationResetTracks(AnimationVisualState*, s32, s32);

// Select the middle visual part and restart its pair of tracks.
extern "C" void animationSelectSecondPart(AnimationVisualState* state)
{
    state->state = 4;
    if (state->binding != NULL) {
        state->binding->model->parts[0]->enabled = 0;
        state->binding->model->parts[1]->enabled = 1;
        state->binding->model->parts[2]->enabled = 0;
    }
    animationResetTracks(state, 1, 1);
}
