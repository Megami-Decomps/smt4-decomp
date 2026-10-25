#include "shard/W5_W5Match5_GameSaveViews.h"

static __inline u8 gameSaveWorkTestFlag(const GameSaveWork *work, s32 flagIndex, u8 mask)
{
    return (work->flags[flagIndex] & mask) != 0;
}

extern "C" {

u8 gameSaveTestFlag(s32 flagIndex, u8 mask)
{
    GameSaveImage *save = reinterpret_cast<GameSaveImage  *>(g_gameDataBlocks.saveBlock);
    return gameSaveWorkTestFlag(&save->work, flagIndex, mask);
}

} /* extern "C" */
