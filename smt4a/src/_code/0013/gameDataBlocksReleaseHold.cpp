#include "gamedata/GameSaveBlocks.h"

extern "C" {

void appletSetHomeButtonHeld(void);

/* Clears the given bits of `holds`, marks the table idle once none are left, then runs appletSetHomeButtonHeld. */
void gameDataBlocksReleaseHold(u32 bits)
{
    g_gameDataBlocks.homeButtonHolds = g_gameDataBlocks.homeButtonHolds & ~bits;
    if (g_gameDataBlocks.homeButtonHolds != 0) {
        g_gameDataBlocks.homeButtonIdle = 0;
        appletSetHomeButtonHeld();
        return;
    }
    g_gameDataBlocks.homeButtonIdle = 1;
    appletSetHomeButtonHeld();
}

} /* extern "C" */
