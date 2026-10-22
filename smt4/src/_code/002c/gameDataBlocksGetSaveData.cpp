#include "shard/GameDataBlocks.h"

extern "C" {

u8 *gameDataBlocksGetSaveData(void)
{
    return (u8 *)g_gameDataBlocks.saveBlock + 0x88;
}

} /* extern "C" */
