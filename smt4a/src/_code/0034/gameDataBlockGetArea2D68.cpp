#include "shard/Shard0034.h"

extern "C" {

extern GameDataBlocks g_gameDataBlocks;

u8 *gameDataBlockGetArea2D68(void)
{
    return g_gameDataBlocks.block->unk2D68;
}

} /* extern "C" */
