#include "shard/W5_W5Match4_BattleTransition.h"

/* Starts a timed transition, preserving the current packed parameter. */
extern "C" void btlStartPackedTransition(BattleTransitionState *state, s32 target, s32 mode, f32 duration)
{
    const f32 start = 0.0f; /* elapsed time at the start */
    state->duration = duration;
    state->target = target;
    state->mode = mode;
    state->elapsed = start;
    state->previous.value = state->current.value;
    state->frame = 0;
    state->flags |= 0x800;
}
