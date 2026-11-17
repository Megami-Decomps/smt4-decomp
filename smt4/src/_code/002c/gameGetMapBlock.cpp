#include "gamedata/GameSaveBlocks.h"
#include "shard/GameDataBlocks.h"
#include "shard/SaveWork.h"

extern "C" {

SaveWork *gameGetMapBlock(void)
{
    return reinterpret_cast<SaveWork *>(g_gameDataBlocks.saveBlock->body.mapBlock);
}

} /* extern "C" */
