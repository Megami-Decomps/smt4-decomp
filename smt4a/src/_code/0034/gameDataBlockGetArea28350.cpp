#include "shard/Shard0034.h"
#include "result/WhisperEffect.h"

extern "C" {

extern GameDataBlocks g_gameDataBlocks;

u8 *gameDataBlockGetArea28350(void)
{
    return g_gameDataBlocks.block->unk28350;
}

} /* extern "C" */
