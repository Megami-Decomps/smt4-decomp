#include "shard/GameDataBlocks.h"

extern "C" {

u32 FUN_00259800(void)
{
    return g_gameDataBlocks.saveBlock->body.config.selection.state.value;
}

} /* extern "C" */
