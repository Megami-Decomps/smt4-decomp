#include "common.h"
#include "shard/GameDataBlocks.h"
#include "shard/gameDataFlagsClear.h"

extern "C" {

/* Clears the given bits of the game-data flag word and records whether any flag is left. */
void gameDataFlagsClear(u32 mask)
{
    g_gameDataBlocks.flags &= ~mask;
    g_gameDataBlocks.noFlags = (g_gameDataBlocks.flags == 0);
}

} /* extern "C" */
