#include "shard/GameDataBlocks.h"

extern "C" {

u32 FUN_0025981c(void)
{
    return g_gameDataBlocks.saveBlock->body.config.selection.money;
}

} /* extern "C" */
