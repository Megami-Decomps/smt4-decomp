/* NON_MATCHING: retail uses different vector-store grouping and address registers for transition initialization. */
#include "shard/W5_W5Match4_BattleVectorTransition.h"

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
    state->axisElapsed.z = 0.0f;
    state->axisElapsed.y = 0.0f;
    state->axisElapsed.x = 0.0f;
}
