#include "shard/W5_W5Match4_BattleVectorTransition.h"
#include "battle/btlCamera.h"

static __inline void battleVectorClear(BattleVector3 *vector)
{
    vector->x = vector->y = vector->z = 0.0f;
}

extern "C" {
extern BtlCameraStatics g_btlMain;
void battleRouteVectorTransition(BattleVectorTransition *state, s32 target, s32 mode, f32 x, f32 y, f32 z);

void btlSetVectorTransitionTarget(BattleVectorTransition *state, s32 target, s32 mode, f32 x, f32 y, f32 z)
{
    if (g_btlMain.routingMode >= 1) {
        battleRouteVectorTransition(static_cast<BattleVectorTransition *>(g_btlMain.camera), target, mode, x, y, z);
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
