/* NON_MATCHING: store scheduling only: retail stores 13 then 0 and uses a writeback `str [r1,#468]!` for the last store */
/* Resets the gameFlagsGetBlock state and starts mode 13 with the scrGetArg value as its argument; always returns 1. */
#include "shard/W5_W5Match7_SceneState.h"

extern "C" {

u8 *gameFlagsGetBlock(void);
s32 scrGetArg(s32 index);

s32 FUN_0035cfd4(void)
{
    LmapScene *state;
    s32 value;

    gameFlagsGetBlock();
    value = scrGetArg(0);
    state = g_lmapScene;
    state->entry.unk228 = value;
    state->entry.entryMode = 13;
    state->entry.unk1d4 = 0;
    state->entry.unk238 = value;
    return 1;
}

}
