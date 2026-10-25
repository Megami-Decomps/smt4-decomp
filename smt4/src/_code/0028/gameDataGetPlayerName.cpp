#include "shard/GameDataBlocks.h"
#include "util/GameDataGetPlayerName.h"

extern "C" {

u8 *gameDataGetPlayerName(void)
{
    return (u8 *)g_gameDataBlocks.saveBlock + 0x1f8e8;
}

} /* extern "C" */
