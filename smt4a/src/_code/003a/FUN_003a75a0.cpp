#include "common.h"
#include "game/GameStateA.h"

extern "C" {
s32 scrGetArg(u32 index);

/* Script command: raises a game state flag and stores its first argument in the state's value at 0xa4. */
s32 FUN_003a75a0(void)
{
    g_gameState.unk058 = 1;
    g_gameState.unk0A4 = scrGetArg(0);
    return 1;
}
}
