#include "shard/GameDataBlocks.h"
#include "shard/FUN_00295cec.h"

extern "C" {

u32 FUN_00295cec(void)
{
    return g_gameDataBlocks.saveBlock->unk09870;
}

} /* extern "C" */
