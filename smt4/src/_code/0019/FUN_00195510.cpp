#include "shard/GameDataBlocks.h"

extern "C" {

void FUN_00195510(u8 value)
{
    g_gameDataBlocks.saveBlock->unk24BB0 = value;
}

} /* extern "C" */
