#include "shard/GameDataBlocks.h"

extern "C" {

u8 *gameGetMapBlock(void)
{
    return g_gameDataBlocks.unk04 + 0xa8c0;
}

} /* extern "C" */
