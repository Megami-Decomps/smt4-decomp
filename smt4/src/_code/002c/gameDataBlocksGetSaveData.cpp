#include "shard/GameDataBlocks.h"
#include "util/GameDataBlocksGetSaveData.h"

extern "C" {

u8 *gameDataBlocksGetSaveData(void)
{
    return (u8 *)g_gameDataBlocks.saveBlock + 0x88;
}

} /* extern "C" */
