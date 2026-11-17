#include "common.h"
#include "game/GameStateA.h"

extern "C" {

void FUN_00303460(u32 mode);

/* Script command: clears the game state's flag at 0x450 and runs FUN_00303460(25). */
void FUN_003bf4f0(void)
{
    g_gameState.unk450 = 0;
    FUN_00303460(25);
}

} /* extern "C" */
