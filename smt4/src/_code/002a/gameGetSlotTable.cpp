#include "shard/GameDataBlocks.h"

extern "C" {

u8 *gameGetSlotTable(void)
{
    return g_gameDataBlocks.unk04 + 0x8c;
}

} /* extern "C" */
