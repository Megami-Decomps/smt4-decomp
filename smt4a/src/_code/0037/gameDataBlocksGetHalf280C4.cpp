#include "shard/Shard0037.h"

extern "C" {

extern GameDataBlocks g_gameDataBlocks;

/* Address of entry `index` of the halfword table at +0x280C4 of the game data block. */
u16 *gameDataBlocksGetHalf280C4(s32 index)
{
    u32 block = (u32)g_gameDataBlocks.block;

    return (u16 *)(block + index * 2 + 0x280C4);
}

} /* extern "C" */
