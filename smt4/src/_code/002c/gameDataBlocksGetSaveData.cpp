#include "shard/GameDataBlocks.h"

extern "C" {

u8 *gameDataBlocksGetSaveData(void)
{
    return g_gameDataBlocks.unk04 + 0x88;
}

} /* extern "C" */
