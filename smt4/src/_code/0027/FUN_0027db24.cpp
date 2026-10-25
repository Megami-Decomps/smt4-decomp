#include "shard/GameDataBlocks.h"
#include "shard/FUN_0027db24.h"

extern "C" {

void FUN_0027db24(u8 value)
{
    g_gameDataBlocks.saveBlock->unk1ECD8 = value;
}

} /* extern "C" */
