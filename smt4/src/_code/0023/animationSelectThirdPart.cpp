/* NON_MATCHING: compiler hoists the binding load before the state write and changes temporary registers/constant scheduling. Candidate O2. */
#include "shard/W6_W6Match2_AnimationVisualState.h"

extern "C" void animationResetTracks(AnimationVisualState* state, s32 track, s32 mode);

// Enter visual state five, select the third model part and reset its animation tracks.
extern "C" void animationSelectThirdPart(AnimationVisualState* state)
{
    state->state = 5;
    if (state->binding != NULL) {
        state->binding->model->parts[0]->enabled = 0;
        state->binding->model->parts[1]->enabled = 0;
        state->binding->model->parts[2]->enabled = 1;
    }
    animationResetTracks(state, 2, 0);
}
