#include "shard/GameDataBlocks.h"
#include "gamedata/DataTable.h"

extern "C" {

u8 *FUN_00282be4(void)
{
    return g_gameDataBlocks.saveBlock->block09874;
}

} /* extern "C" */
