#include "shard/GameDataBlocks.h"

extern "C" {

u8 *gameGetQuestCenterBlock(void)
{
    return g_gameDataBlocks.unk04 + 0x1e9ac;
}

} /* extern "C" */
