#include "shard/GameDataBlocks.h"

extern "C" {

u8 *gameDataGetPlayerName(void)
{
    return g_gameDataBlocks.unk04 + 0x1f8e8;
}

} /* extern "C" */
