#include "shard/GameDataBlocks.h"

extern "C" {

u8 *gameGetFlagBlock(void)
{
    return (u8 *)g_gameDataBlocks.saveBlock + 0xb9a4;
}

} /* extern "C" */
