#include "shard/GameDataBlocks.h"
#include "shard/FUN_00282be4.h"

extern "C" {

u8 *FUN_00282be4(void)
{
    return g_gameDataBlocks.saveBlock->block09874;
}

} /* extern "C" */
