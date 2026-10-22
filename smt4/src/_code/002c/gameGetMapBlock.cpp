#include "shard/GameDataBlocks.h"

extern "C" {

u8 *gameGetMapBlock(void)
{
    return (u8 *)g_gameDataBlocks.saveBlock + 0xa8c0;
}

} /* extern "C" */
