#include "gamedata/GameSaveBlocks.h"
#include "shard/Shard0034.h"

extern "C" {

u32 gameDataBlocks2GetWord4(void)
{
    return g_gameDataBlocks.workBlock->slots.money;
}

} /* extern "C" */
