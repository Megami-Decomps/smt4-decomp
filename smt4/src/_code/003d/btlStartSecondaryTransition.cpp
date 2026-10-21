#include "shard/W5_W5Match4_BattleTransition.h"

/* Starts the secondary timed transition. */
extern "C" void btlStartSecondaryTransition(BattleTransitionState *state, s32 target, s32 mode, f32 duration)
{
    state->secondaryDuration = duration;
    state->secondaryElapsed = 0.0f;
    state->secondaryMode = mode;
    state->secondaryTarget = target;
    state->secondaryFrame = 0;
    state->flags |= 0x400;
}
