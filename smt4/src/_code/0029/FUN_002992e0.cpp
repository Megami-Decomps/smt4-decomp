/* NON_MATCHING: The transition-state switch merges pointer reloads and stores differently. */
#include "shard/GameGlobals.h"
#include "status/StatusBustUp.h"

/* Enters game state `state` with its step counter cleared. */
static __inline void gameSetState(s32 state)
{
    g_gameGlobals.data->unk10 = 0;
    g_gameGlobals.data->activeState = state;
}

// Requests the selected transition mode and enters the transition state.
extern "C" void FUN_002992e0(s32 mode)
{
    if (mode == 0) {
        playerModelLoadPart(g_gameGlobals.data->unk1E80, 0, 7);
    } else if (mode == 1) {
        playerModelLoadPart(g_gameGlobals.data->unk1E80, 1, 7);
    } else if (mode == 2) {
        playerModelLoadPart(g_gameGlobals.data->unk1E80, 2, 7);
    }
    gameSetState(6);
}
