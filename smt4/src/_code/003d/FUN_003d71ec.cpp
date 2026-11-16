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
    BattleVector3 destination;
    destination.y = y;
    destination.z = z;
    destination.x = x;
    state->axisDestination = destination;
    state->flags |= 0x800000;
    battleVectorClear(&state->axisElapsed);
}
