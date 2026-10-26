#include "shard/W4_W4Match6b_GameDataBlock.h"
#include "gamedata/GameDataAccess.h"

extern "C" {


/* Returns the word at 0xC of the game-data block table. */
u32 gameDataGetSmallBlock(void)
{
    return (u32)g_gameDataBlocks.smallBlock;
}

} /* extern "C" */
