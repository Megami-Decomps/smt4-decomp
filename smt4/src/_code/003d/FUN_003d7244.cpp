/* NON_MATCHING: only the register of the 1776-offset address/zero (retail r4/r3) differs; vector copy matches. */
#include "shard/W5_W5Match4_BattleVectorTransition.h"

extern "C" BattleVector3 DAT_00493530;

/* Starts the vector transition and resets its progress. */
extern "C" void FUN_003d7244(BattleVectorTransition *state, s32 target, s32 mode, f32 x, f32 y, f32 z)
{
    battleVectorCopy(&DAT_00493530, &state->current);
    state->alternateDestination.x = x;
    state->alternateDestination.y = y;
    state->alternateDestination.z = z;
    state->alternateTarget = target;
    state->alternateFrame = 0;
    state->alternateMode = mode;
    state->flags |= 0x8000;
}
