#include "shard/GameDataBlocks.h"

extern "C" {

int appletSetHomeButtonHeld(int value);

void FUN_002c5758(u32 mask)
{
    g_gameDataBlocks.unk10 = g_gameDataBlocks.unk10 & ~mask;
    if (g_gameDataBlocks.unk10 != 0) {
        g_gameDataBlocks.unk00 = 0;
        appletSetHomeButtonHeld(0);
        return;
    }
    g_gameDataBlocks.unk00 = 1;
    appletSetHomeButtonHeld(1);
}

} /* extern "C" */
