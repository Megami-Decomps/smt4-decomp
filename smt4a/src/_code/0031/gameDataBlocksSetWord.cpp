#include "gamedata/GameSaveBlocks.h"
#include "shard/Shard0031.h"

extern "C" {

void gameDataBlocksSetWord(u32 value)
{
    g_gameDataBlocks.saveBlock->body.runtime.unk21D8C = value;
}

} /* extern "C" */
