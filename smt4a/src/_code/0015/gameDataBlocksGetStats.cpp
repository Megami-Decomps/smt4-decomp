#include "gamedata/GameSaveBlocks.h"
#include "gamedata/GameDataAccess.h"

extern "C" {

/* Returns the quest center block of the save body. */
u8 *gameDataBlocksGetStats(void)
{
    return g_gameDataBlocks.saveBlock->body.questCenter;
}

} /* extern "C" */
