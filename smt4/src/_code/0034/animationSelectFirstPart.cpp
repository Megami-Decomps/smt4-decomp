/* NON_MATCHING: with FUN_0034d504's body inlined, only the second part's store differs: retail loads the part pointer chain before materialising the 0; the build loads it after (the same order FUN_0034d504 misses). */
#include "shard/W6_W6Match2_AnimationVisualState.h"

extern "C" void animationResetTracks(AnimationVisualState* state, s32 track, s32 mode);

// Enter visual state three, select the first model part and reset its animation tracks.
extern "C" void animationSelectFirstPart(AnimationVisualState* state)
{
    state->state = 3;
    animationShowSelectedPart(state);
    animationResetTracks(state, 0, 0);
}
