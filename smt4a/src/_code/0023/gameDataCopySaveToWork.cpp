#include "shard/W5_W5Match5_GameSaveViews.h"

extern "C" {

void rt_memcpy_w(void *destination, const void *source, u32 size);
void gameDataCopySaveToWork(void)
{
    GameSaveImage *save = reinterpret_cast<GameSaveImage  *>(g_gameDataBlocks.saveBlock);
    rt_memcpy_w(g_gameDataBlocks.workBlock, &save->work, sizeof(save->work));
}

} /* extern "C" */
