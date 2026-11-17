#include "gamedata/GameSaveBlocks.h"
#include "shard/GameDataBlocks.h"

extern "C" {

u8 *saveGetFlagRowTable(void)
{
    return g_gameDataBlocks.saveBlock->body.flagRows;
}

} /* extern "C" */
