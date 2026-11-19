#include "common.h"
#include "game/GameState.h"


extern "C" {


void bgmResumeOrRequestTrack(s32 value);

/* Script command: hands the game-state word at 0x28 to bgmResumeOrRequestTrack. */
u32 FUN_0030a8ac(void)
{
    bgmResumeOrRequestTrack(g_gameState.bgmId);
    return 1;
}

} /* extern "C" */
