#include "gamedata/GameSaveBlocks.h"
#include "shard/GameDataBlocks.h"

extern "C" {

u8 *gameDataGetFlagBits(void)
{
    return g_gameDataBlocks.saveBlock->body.flagBits;
}

} /* extern "C" */
