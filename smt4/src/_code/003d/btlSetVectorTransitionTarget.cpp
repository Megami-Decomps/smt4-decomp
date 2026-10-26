#include "shard/W5_W5Match4_BattleVectorTransition.h"

struct VectorTransitionGlobals {
    BattleVectorTransition *state; // 0x00
    u8 unk04[0x24];
    s32 routingMode; // 0x28
};

static __inline void battleVectorClear(BattleVector3 *vector)
{
    vector->x = vector->y = vector->z = 0.0f;
}

extern "C" {
extern VectorTransitionGlobals g_btlMain;
void battleRouteVectorTransition(BattleVectorTransition *state, s32 target, s32 mode, f32 x, f32 y, f32 z);

void btlSetVectorTransitionTarget(BattleVectorTransition *state, s32 target, s32 mode, f32 x, f32 y, f32 z)
{
    if (g_btlMain.routingMode >= 1) {
        battleRouteVectorTransition(g_btlMain.state, target, mode, x, y, z);
        return;
    }
    state->alternateDestination.x = x;
    state->alternateDestination.y = y;
    state->alternateDestination.z = z;
    battleVectorClear(&state->current);
    state->alternateTarget = target;
    state->alternateFrame = 0;
    state->alternateMode = mode;
    state->flags |= 0x2000;
}
}
