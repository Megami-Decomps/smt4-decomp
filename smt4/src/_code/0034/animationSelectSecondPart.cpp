/* NON_MATCHING: with FUN_0034d504's body inlined, retail loads each part pointer chain before materialising its 0/1 (r1 chain, r2 value); the build materialises the values first (the same order FUN_0034d504 misses). */
#include "shard/W6_W6Match2_AnimationVisualState.h"

extern "C" void animationResetTracks(AnimationVisualState*, s32, s32);

// Select the middle visual part and restart its pair of tracks.
extern "C" void animationSelectSecondPart(AnimationVisualState* state)
{
    state->state = 4;
    animationShowSelectedPart(state);
    animationResetTracks(state, 1, 1);
}
