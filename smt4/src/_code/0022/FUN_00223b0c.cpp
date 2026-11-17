#include "shard/GameDataBlocks.h"

extern "C" {

void FUN_00223b0c(u32 value)
{
    g_gameDataBlocks.saveBlock->body.unk1F454 = value;
}

} /* extern "C" */
