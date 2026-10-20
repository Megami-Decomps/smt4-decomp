#include "shard/GameDataBlocks.h"

extern "C" {

u8 *gameDataBlocksGetTable(void)
{
    return g_gameDataBlocks.unk04;
}

} /* extern "C" */
