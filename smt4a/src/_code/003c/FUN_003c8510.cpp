#include "common.h"
#include "game/GameStateA.h"

extern "C" {

/* Stores the value in the game state at 0x44c. */
void FUN_003c8510(u32 value)
{
    g_gameState.unk44C = value;
}

} /* extern "C" */
