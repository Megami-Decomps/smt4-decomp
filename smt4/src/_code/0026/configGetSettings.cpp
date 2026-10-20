#include "shard/GameDataBlocks.h"

extern "C" {

u8 *configGetSettings(void)
{
    return g_gameDataBlocks.unk04 + 0x80;
}

} /* extern "C" */
