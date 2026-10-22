#include "common.h"
#include "shard/GameDataBlocks.h"

extern "C" {

/* Sets the given bits in the game-data flag word and clears the "no flags" byte. */
void gameDataFlagsSet(u32 mask)
{
    g_gameDataBlocks.noFlags = 0;
    g_gameDataBlocks.flags |= mask;
}

} /* extern "C" */
