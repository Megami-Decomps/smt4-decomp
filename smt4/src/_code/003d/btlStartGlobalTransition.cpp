#include "shard/W5_W5Match4_BattleTransition.h"
#include "battle/btlCamera.h"

extern "C" {

extern BtlCameraStatics g_btlMain;

/* Starts the global-duration transition. */
void btlStartGlobalTransition(BattleTransitionState *state, s32 target, s32 mode, f32 duration)
{
    g_btlMain.transitionTarget = duration;
    state->globalTarget = target;
    state->globalMode = mode;
    state->globalElapsed = 0.0f;
    state->globalFrame = 0;
    state->flags |= 0x200;
}

}
