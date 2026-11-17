#include "gamedata/GameSaveBlocks.h"
#include "shard/GameDataBlocks.h"

extern "C" {

u8 *gameGetQuestCenterBlock(void)
{
    return g_gameDataBlocks.saveBlock->body.questCenter;
}

} /* extern "C" */
