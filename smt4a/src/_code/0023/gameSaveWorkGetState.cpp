#include "shard/W5_W5Match5_GameSaveViews.h"

extern "C" {

u8 gameSaveWorkGetState(void)
{
    GameSaveWork *work = &reinterpret_cast<GameSaveImage *>(g_gameDataBlocks.saveBlock)->work;
    return work->state;
}

} /* extern "C" */
