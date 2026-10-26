/* NON_MATCHING: retail zeros the frame through r1 before saving the previous parameter; armcc uses ip and reorders those stores (frame-before-previous order tried as well). */
#include "shard/W5_W5Match4_BattleTransition.h"

/* Starts a timed transition, preserving the current packed parameter. */
extern "C" void btlStartPackedTransition(BattleTransitionState *state, s32 target, s32 mode, f32 duration)
{
    state->duration = duration;
    state->target = target;
    state->mode = mode;
    state->elapsed = 0.0f;
    state->previous.value = state->current.value;
    state->frame = 0;
    state->flags |= 0x800;
}
