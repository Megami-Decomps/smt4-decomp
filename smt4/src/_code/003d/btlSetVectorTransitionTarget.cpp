/* NON_MATCHING: zero-vector stores are hoisted before destination stores and reuse state+0x400 rather than retail's rebased current-vector address; -O2 also changes metadata store grouping. */
#include "shard/W5_W5Match4_BattleVectorTransition.h"

struct VectorTransitionGlobals {
    BattleVectorTransition *state; // 0x00
    u8 unk04[0x24];
    s32 routingMode; // 0x28
};

extern "C" {
extern VectorTransitionGlobals g_btlMain;
void FUN_003d6c88(BattleVectorTransition *state, s32 target, s32 mode, f32 x, f32 y, f32 z);

void btlSetVectorTransitionTarget(BattleVectorTransition *state, s32 target, s32 mode, f32 x, f32 y, f32 z)
{
    if (g_btlMain.routingMode >= 1) {
        FUN_003d6c88(g_btlMain.state, target, mode, x, y, z);
        return;
    }
    state->alternateDestination.x = x;
    state->alternateDestination.y = y;
    state->alternateDestination.z = z;
    state->current.x = state->current.y = state->current.z = 0.0f;
    state->alternateTarget = target;
    state->alternateFrame = 0;
    state->alternateMode = mode;
    state->flags |= 0x2000;
}
}
