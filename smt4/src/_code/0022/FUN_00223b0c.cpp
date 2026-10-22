#include "shard/GameDataBlocks.h"

extern "C" {

void FUN_00223b0c(u32 value)
{
    g_gameDataBlocks.saveBlock->unk1F4DC = value;
}

} /* extern "C" */
