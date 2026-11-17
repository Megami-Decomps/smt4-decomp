#include "gamedata/GameSaveBlocks.h"
#include "shard/GameDataBlocks.h"

extern "C" {

u8 *configGetSettings(void)
{
    return g_gameDataBlocks.saveBlock->settings;
}

} /* extern "C" */
