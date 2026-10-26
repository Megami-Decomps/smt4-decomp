#include "shard/GameDataBlocks.h"
#include "status/StatusCamera.h"

extern "C" {

u8 *FUN_002a0d0c(void)
{
    return g_gameDataBlocks.saveBlock->block1EC18;
}

} /* extern "C" */
