#include "shard/GameDataBlocks.h"

extern "C" {

int appletSetHomeButtonHeld(int arg);

void gameDataBlocksAddFlags(u32 flags)
{
    g_gameDataBlocks.unk00 = 0;
    g_gameDataBlocks.unk10 = flags | g_gameDataBlocks.unk10;
    appletSetHomeButtonHeld(0);
}

} /* extern "C" */
