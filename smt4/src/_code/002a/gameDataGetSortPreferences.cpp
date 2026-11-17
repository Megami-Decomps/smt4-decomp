#include "shard/GameDataBlocks.h"
#include "status/StatusCamera.h"

extern "C" {

u8 *gameDataGetSortPreferences(void)
{
    return g_gameDataBlocks.saveBlock->body.sortPreferences;
}

} /* extern "C" */
