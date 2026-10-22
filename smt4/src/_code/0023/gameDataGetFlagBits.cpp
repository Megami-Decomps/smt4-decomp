#include "shard/GameDataBlocks.h"

extern "C" {

u8 *gameDataGetFlagBits(void)
{
    return (u8 *)g_gameDataBlocks.saveBlock + 0x981e;
}

} /* extern "C" */
