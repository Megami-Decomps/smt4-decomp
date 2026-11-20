#include "common.h"
#include "game/GameStateA.h"

extern "C" {

void lmapCameraSetMode(u32 mode);

/* Script command: clears the game state's flag at 0x450 and runs lmapCameraSetMode(25). */
void FUN_003bf4f0(void)
{
    g_gameState.unk450 = 0;
    lmapCameraSetMode(25);
}

} /* extern "C" */
