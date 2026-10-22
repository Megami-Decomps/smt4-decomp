#include "shard/GameDataBlocks.h"

extern "C" {

u8 *configGetSettings(void)
{
    return (u8 *)g_gameDataBlocks.saveBlock + 0x80;
}

} /* extern "C" */
