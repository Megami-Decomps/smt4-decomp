#include "gamedata/GameSaveBlocks.h"
#include "shard/Shard0031.h"

extern "C" {

u32 gameDataBlocksGetWord(void)
{
    return g_gameDataBlocks.saveBlock->body.runtime.unk21D8C;
}

} /* extern "C" */
