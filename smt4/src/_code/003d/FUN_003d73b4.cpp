/* NON_MATCHING: the zero for secondaryFrame is materialised in r1 and stored at once; retail puts it in r2 and computes the flags address first. */
#include "shard/W5_W5Match4_BattleVectorTransition.h"

static __inline void battleVectorClear(BattleVector3 *vector)
{
    vector->x = vector->y = vector->z = 0.0f;
}

/* Starts the vector transition and resets its progress. */
extern "C" void FUN_003d73b4(BattleVectorTransition *state, s32 target, s32 mode, f32 x, f32 y, f32 z)
{
    state->destination.x = x;
    state->destination.y = y;
    state->destination.z = z;
    state->target = target;
    state->mode = mode;
    battleVectorClear(&state->elapsed);
    state->secondaryFrame = 0;
    state->flags |= 0x1000;
}
