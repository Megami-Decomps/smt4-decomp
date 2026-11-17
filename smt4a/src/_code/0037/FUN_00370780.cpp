#include "common.h"
#include "game/GameStateA.h"

extern "C" {

/* Sets the game state flag at 0x4d9. */
void FUN_00370780(void)
{
    g_gameState.unk4D9 = 1;
}

} /* extern "C" */
