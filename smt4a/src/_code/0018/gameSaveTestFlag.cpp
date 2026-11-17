#include "gamedata/GameSaveBlocks.h"
#include "shard/W5_W5Match5_GameSaveViews.h"

static __inline u8 gameSaveWorkTestFlag(const GameSaveBodyA *body, s32 flagIndex, u8 mask)
{
    return (body->work.savedFlags[flagIndex] & mask) != 0;
}

extern "C" {

u8 gameSaveTestFlag(s32 flagIndex, u8 mask)
{
    GameSaveDataA *save = g_gameDataBlocks.saveBlock;
    return gameSaveWorkTestFlag(&save->body, flagIndex, mask);
}

} /* extern "C" */
