#include "shard/W5_W5Match5_GameSaveViews.h"

extern "C" {

void gameSaveWorkOrFlagMask(s32 flagIndex, u8 mask)
{
    GameSaveImage *save = reinterpret_cast<GameSaveImage  *>(g_gameDataBlocks.saveBlock);
    GameSaveWork *work = &save->work;
    work->flags[flagIndex] |= mask;
}

} /* extern "C" */
