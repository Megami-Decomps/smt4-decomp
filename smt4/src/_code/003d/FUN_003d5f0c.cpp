/* NON_MATCHING: retail uses different vector-store grouping and address registers for transition initialization. */
#include "shard/W5_W5Match4_BattleVectorTransition.h"

/* Starts the vector transition and resets its progress. */
extern "C" void FUN_003d5f0c(BattleVectorTransition *state, s32 target, s32 mode, f32 x, f32 y, f32 z)
{
    state->secondaryElapsed.z = 0.0f;
    state->secondaryElapsed.y = 0.0f;
    state->secondaryElapsed.x = 0.0f;
    state->destination.x = x;
    state->destination.y = y;
    state->destination.z = z;
    state->secondaryMode = mode;
    state->secondaryTarget = target;
    state->secondaryFrame = 0;
    state->flags |= 0x1000;
}
