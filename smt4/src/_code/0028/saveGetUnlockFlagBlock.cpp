#include "shard/GameDataBlocks.h"
#include "gamedata/DataTable.h"

extern "C" {

u8 *saveGetUnlockFlagBlock(void)
{
    return g_gameDataBlocks.saveBlock->block09874;
}

} /* extern "C" */
