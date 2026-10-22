#include "shard/GameDataBlocks.h"

extern "C" {

u8 *gameGetCounters(void)
{
    return (u8 *)g_gameDataBlocks.saveBlock + 0x1f4e4;
}

} /* extern "C" */
