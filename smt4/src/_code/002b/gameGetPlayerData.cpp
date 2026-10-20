#include "shard/GameDataBlocks.h"

extern "C" {

u8 *gameGetPlayerData(void)
{
    return g_gameDataBlocks.unk04 + 0x90;
}

} /* extern "C" */
