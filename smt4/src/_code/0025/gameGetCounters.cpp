#include "shard/GameDataBlocks.h"

extern "C" {

u8 *gameGetCounters(void)
{
    return g_gameDataBlocks.unk04 + 0x1f4e4;
}

} /* extern "C" */
