#include "shard/GameDataBlocks.h"

extern "C" {

int FUN_0010fb68(u16 *counter);

void FUN_002c5620(void)
{
    FUN_0010fb68(g_gameDataBlocks.smallBlock);
}

} /* extern "C" */
