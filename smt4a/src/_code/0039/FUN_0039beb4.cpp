#include "common.h"
#include "game/GameStateA.h"

/* Script command: sets the game state flag at 0x49f. */
extern "C" void FUN_0039beb4(void)
{
    g_gameState.unk49F = 1;
}
