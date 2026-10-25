#include "shard/GameDataBlocks.h"
#include "shard/gameDataBlocksAddFlags.h"

extern "C" {

int appletSetHomeButtonHeld(int arg);

void gameDataBlocksAddFlags(u32 flags)
{
    g_gameDataBlocks.homeButtonIdle = 0;
    g_gameDataBlocks.homeButtonHolds = flags | g_gameDataBlocks.homeButtonHolds;
    appletSetHomeButtonHeld(0);
}

} /* extern "C" */
