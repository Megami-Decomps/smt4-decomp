/* NON_MATCHING: flags update and the elapsed-vector clear match retail; retail moves the destination floats through integer registers (vmov r3,s1; str) in a push {r4,r5} frame instead of storing them with vstr. */
#include "shard/W5_W5Match4_BattleVectorTransition.h"

static __inline void battleVectorClear(BattleVector3 *vector)
{
    vector->x = vector->y = vector->z = 0.0f;
}

/* Starts the vector transition and resets its progress. */
extern "C" void FUN_003d71ec(BattleVectorTransition *state, s32 target, s32 mode, f32 x, f32 y, f32 z)
{
    state->axisTarget = target;
    state->axisFrame = 0;
    state->axisMode = mode;
    state->axisDestination.y = y;
    state->axisDestination.z = z;
    state->axisDestination.x = x;
    state->flags |= 0x800000;
    battleVectorClear(&state->axisElapsed);
}
