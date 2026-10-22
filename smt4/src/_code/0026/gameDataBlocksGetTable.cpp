#include "shard/GameDataBlocks.h"

extern "C" {

u8 *gameDataBlocksGetTable(void)
{
    return (u8 *)g_gameDataBlocks.saveBlock;
}

} /* extern "C" */
