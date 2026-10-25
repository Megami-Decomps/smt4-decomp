#include "shard/GameDataBlocks.h"
#include "shard/gameGetSlotTable.h"

extern "C" {

u8 *gameGetSlotTable(void)
{
    return (u8 *)g_gameDataBlocks.saveBlock + 0x8c;
}

} /* extern "C" */
