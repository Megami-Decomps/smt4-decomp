#include "common.h"
#include "game/GameStateA.h"

extern "C" {

void bgmResumeOrRequestTrack(s32 value);

/* Script command: hands the game-state word at 0x2c to bgmResumeOrRequestTrack. */
u32 FUN_0039bc88(void)
{
    bgmResumeOrRequestTrack(g_gameState.bgmId);
    return 1;
}

} /* extern "C" */
