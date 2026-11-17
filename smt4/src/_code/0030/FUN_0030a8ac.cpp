#include "common.h"
#include "game/GameState.h"


extern "C" {


void FUN_00287328(s32 value);

/* Script command: hands the game-state word at 0x28 to FUN_00287328. */
u32 FUN_0030a8ac(void)
{
    FUN_00287328(g_gameState.bgmId);
    return 1;
}

} /* extern "C" */
