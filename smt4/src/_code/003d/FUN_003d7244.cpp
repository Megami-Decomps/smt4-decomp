#include "shard/W5_W5Match4_BattleVectorTransition.h"

extern "C" BattleVector3 DAT_00493530;

/* Restarts a transition: sets its target and rewinds its frame. */
static __inline void battleTransitionRestart(s32 *target, s32 value)
{
    target[0] = value;
    target[1] = 0;
}

/* Starts the alternate vector transition, remembering where its progress started. */
extern "C" void FUN_003d7244(BattleVectorTransition *state, s32 target, s32 mode, f32 x, f32 y, f32 z)
{
    battleVectorCopy(&DAT_00493530, &state->current);
    state->alternateDestination.x = x;
    state->alternateDestination.y = y;
    state->alternateDestination.z = z;
    battleTransitionRestart(&state->alternateTarget, target);
    state->alternateMode = mode;
    state->flags |= 0x8000;
}
