#include "shard/GameDataBlocks.h"

extern "C" {

int appletSetHomeButtonHeld(int value);

void gameDataRemoveHomeButtonHold(u32 mask)
{
    g_gameDataBlocks.homeButtonHolds = g_gameDataBlocks.homeButtonHolds & ~mask;
    if (g_gameDataBlocks.homeButtonHolds != 0) {
        g_gameDataBlocks.homeButtonIdle = 0;
        appletSetHomeButtonHeld(0);
        return;
    }
    g_gameDataBlocks.homeButtonIdle = 1;
    appletSetHomeButtonHeld(1);
}

} /* extern "C" */
