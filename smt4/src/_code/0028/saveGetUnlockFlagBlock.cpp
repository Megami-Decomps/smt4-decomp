#include "shard/GameDataBlocks.h"
#include "gamedata/DataTable.h"

extern "C" {

u8 *saveGetUnlockFlagBlock(void)
{
    return g_gameDataBlocks.saveBlock->body.unlockFlags;
}

} /* extern "C" */
