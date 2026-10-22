#include "shard/W4_W4Match6b_GameDataBlock.h"

extern "C" {


/* Returns the word at 0x10 of the game-data block table. */
u32 gameDataGetExtraBlock(void)
{
    return (u32)g_gameDataBlocks.extraBlock;
}

} /* extern "C" */
