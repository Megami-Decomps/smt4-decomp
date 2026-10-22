#include "shard/GameDataBlocks.h"

extern "C" {

u8 *gameGetPlayerData(void)
{
    return (u8 *)&g_gameDataBlocks.saveBlock->statusChoices.player;
}

} /* extern "C" */
