#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {


void appletSetHomeButtonHeld(s32 value);

/* Marks the game-data table busy, adds the given bits to `holds` and runs appletSetHomeButtonHeld(0). */
void gameDataAddHomeButtonHold(u32 bits)
{
    g_gameDataBlocks.homeButtonIdle = 0;
    g_gameDataBlocks.homeButtonHolds = bits | g_gameDataBlocks.homeButtonHolds;
    appletSetHomeButtonHeld(0);
}

} /* extern "C" */
