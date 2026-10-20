#include "shard/GameDataBlocks.h"

extern "C" {

u8 *gameDataGetFlagBits(void)
{
    return g_gameDataBlocks.unk04 + 0x981e;
}

} /* extern "C" */
