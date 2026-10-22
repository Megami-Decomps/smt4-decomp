/* NON_MATCHING: retail rebases vectors and copies them with integer registers; this typed reconstruction reuses a common state base and VFP vector loads/stores. */
#include "shard/W5_W5Match4_BattleVectorTransition.h"
#include <stddef.h>

typedef char CheckTransitionSize[sizeof(BattleVectorTransition) == 0x818 ? 1 : -1];
typedef char CheckTransitionPosition[offsetof(BattleVectorTransition, positionData.position) == 0x68 ? 1 : -1];
typedef char CheckTransitionElapsed[offsetof(BattleVectorTransition, elapsedData.alternateElapsed) == 0x5f0 ? 1 : -1];
typedef char CheckTransitionOrigin[offsetof(BattleVectorTransition, originData.originOffset) == 0x764 ? 1 : -1];

struct VectorRoutingGlobals {
    BattleVectorTransition *state;
    u8 unk04[0x24];
    s32 routingMode; // 0x28
};
struct VectorRouteState {
    BattleVector3 current; // 0x00
    BattleVector3 previous; // 0x0c
    BattleVector3 target; // 0x18
};
extern "C" VectorRoutingGlobals g_btlMain;
extern "C" VectorRouteState DAT_00493530;
extern "C" BattleVector3 DAT_00493548;

// Route transition vectors through the global camera origin in the active battle modes.
extern "C" void battleRouteVectorTransition(BattleVectorTransition *state, s32 target, s32, f32 x, f32 y, f32 z)
{
    if (g_btlMain.routingMode == 2) {
        DAT_00493548 = state->positionData.position;
        DAT_00493548.x -= state->originData.originOffset.x;
        DAT_00493548.y -= state->originData.originOffset.y;
        DAT_00493548.z -= state->originData.originOffset.z;
        state->alternateDestination.x = x;
        state->alternateDestination.y = y;
        state->alternateDestination.z = z;
        DAT_00493530.current = state->current;
        state->elapsedData.alternateElapsed = state->elapsed;
    } else if (g_btlMain.routingMode == 1) {
        state->current.x = state->current.y = state->current.z = 0.0f;
        DAT_00493530.current = state->current;
        DAT_00493548.x -= state->originData.originOffset.x;
        DAT_00493548.y -= state->originData.originOffset.y;
        DAT_00493548.z -= state->originData.originOffset.z;
        state->alternateDestination.x = x;
        state->alternateDestination.y = y;
        state->alternateDestination.z = z;
        DAT_00493530.previous = DAT_00493530.current;
        state->elapsedData.alternateElapsed = state->elapsed;
    }
    state->target = target;
    state->frame = 0;
    state->mode = 1;
    state->flags |= 0x20000;
}
