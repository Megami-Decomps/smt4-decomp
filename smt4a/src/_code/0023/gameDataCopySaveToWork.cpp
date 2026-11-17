#include "gamedata/GameSaveBlocks.h"
#include "shard/W5_W5Match5_GameSaveViews.h"

extern "C" {

void __aeabi_memcpy4(void *destination, const void *source, u32 size);
void gameDataCopySaveToWork(void)
{
    GameSaveDataA *save = g_gameDataBlocks.saveBlock;
    __aeabi_memcpy4(g_gameDataBlocks.workBlock, &save->body, sizeof(save->body));
}

} /* extern "C" */
