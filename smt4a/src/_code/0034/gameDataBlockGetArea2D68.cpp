#include "gamedata/GameSaveBlocks.h"
#include "shard/Shard0034.h"

extern "C" {

u8 *gameDataBlockGetArea2D68(void)
{
    return g_gameDataBlocks.saveBlock->body.area2CE0;
}

} /* extern "C" */
