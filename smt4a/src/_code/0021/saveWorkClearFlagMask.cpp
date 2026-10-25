#include "shard/W5_W5Match5_GameSaveViews.h"

extern "C" {

void saveWorkClearFlagMask(s32 flagIndex, u8 mask)
{
    GameSaveWork *work = &reinterpret_cast<GameSaveImage *>(g_gameDataBlocks.saveBlock)->work;
    work->flags[flagIndex] &= ~mask;
}

} /* extern "C" */
