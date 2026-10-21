#include "shard/W5_W5Match4_BattleTransition.h"

struct BattleTransitionGlobals {
    /* 0x00 */ u8 unk00[20];
    /* 0x14 */ f32 duration;
};

extern "C" {

extern BattleTransitionGlobals g_btlMain;

/* Starts the global-duration transition. */
void btlStartGlobalTransition(BattleTransitionState *state, s32 target, s32 mode, f32 duration)
{
    g_btlMain.duration = duration;
    state->globalTarget = target;
    state->globalMode = mode;
    state->globalElapsed = 0.0f;
    state->globalFrame = 0;
    state->flags |= 0x200;
}

}
