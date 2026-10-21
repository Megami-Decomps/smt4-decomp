#include "shard/W5_W5Match4_BattleTransition.h"

/* Starts the alternate timed transition from the current scalar parameter. */
extern "C" void btlStartScalarTransition(BattleTransitionState *state, s32 target, s32 mode, f32 duration)
{
    state->duration = duration;
    state->alternateElapsed = 0.0f;
    state->previous.scalar = state->current.scalar;
    state->alternateMode = mode;
    state->alternateTarget = target;
    state->alternateFrame = 0;
    state->flags |= 0x800;
}
