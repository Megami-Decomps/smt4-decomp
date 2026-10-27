#include "shard/W5_W5Match4_BattleVectorTransition.h"

static __inline void battleVectorClear(BattleVector3 *vector)
{
    vector->x = vector->y = vector->z = 0.0f;
}

static __inline void battleVectorSet(BattleVector3 *vector, f32 x, f32 y, f32 z)
{
    vector->x = x;
    vector->y = y;
    vector->z = z;
}

/* Restarts a transition: sets its target and rewinds its frame. */
static __inline void battleTransitionRestart(s32 *target, s32 value)
{
    target[0] = value;
    target[1] = 0;
}

/* Starts the vector transition and resets its progress. */
extern "C" void battleVectorTransitionStartSecondary(BattleVectorTransition *state, s32 target, s32 mode, f32 x, f32 y, f32 z)
{
    battleVectorClear(&state->secondaryElapsed);
    battleVectorSet(&state->destination, x, y, z);
    battleTransitionRestart(&state->secondaryTarget, target);
    state->secondaryMode = mode;
    state->flags |= 0x1000;
}
