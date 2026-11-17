#include "common.h"
#include "game/GameStateA.h"

extern "C" {

s32 scrGetArg(u32 index);

/* Script command: stores argument zero in the game state at 0x454. */
s32 FUN_00370204(void)
{
    g_gameState.unk454 = scrGetArg(0);
    return 1;
}

} /* extern "C" */
