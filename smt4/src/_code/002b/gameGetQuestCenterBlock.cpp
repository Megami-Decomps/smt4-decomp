#include "shard/GameDataBlocks.h"

extern "C" {

u8 *gameGetQuestCenterBlock(void)
{
    return (u8 *)g_gameDataBlocks.saveBlock + 0x1e9ac;
}

} /* extern "C" */
