/* NON_MATCHING: with FUN_0034d504's body inlined, retail loads each part pointer chain before materialising its value; the build materialises the zero first and keeps it in r1 (the same order FUN_0034d504 misses). */
#include "shard/W6_W6Match2_AnimationVisualState.h"

extern "C" void animationResetTracks(AnimationVisualState* state, s32 track, s32 mode);

// Enter visual state five, select the third model part and reset its animation tracks.
extern "C" void animationSelectThirdPart(AnimationVisualState* state)
{
    state->state = 5;
    animationShowSelectedPart(state);
    animationResetTracks(state, 2, 0);
}
