#include "shard/GameDataBlocks.h"
#include "gamedata/GameDataAccess.h"

extern "C" {
int gameGetOptions(void)
{
    return (int)((u8 *)g_gameDataBlocks.saveBlock + 0x1D30);
}
}
