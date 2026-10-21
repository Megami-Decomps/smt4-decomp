/* NON_MATCHING: compiler hoists the binding load before the state write and changes temporary registers/constant scheduling. Candidate O2. */
#include "shard/W6_W6Match2_AnimationVisualState.h"

extern "C" void animationResetTracks(AnimationVisualState* state, s32 track, s32 mode);

// Enter visual state three, select the first model part and reset its animation tracks.
extern "C" void animationSelectFirstPart(AnimationVisualState* state)
{
    state->state = 3;
    if (state->binding != NULL) {
        state->binding->model->parts[0]->enabled = 1;
        state->binding->model->parts[1]->enabled = 0;
        state->binding->model->parts[2]->enabled = 0;
    }
    animationResetTracks(state, 0, 0);
}
