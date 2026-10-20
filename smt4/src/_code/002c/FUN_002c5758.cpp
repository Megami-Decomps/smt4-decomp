#include "shard/GameDataBlocks.h"

extern "C" {

int FUN_002c34f8(int value);

void FUN_002c5758(u32 mask)
{
    g_gameDataBlocks.unk10 = g_gameDataBlocks.unk10 & ~mask;
    if (g_gameDataBlocks.unk10 != 0) {
        g_gameDataBlocks.unk00 = 0;
        FUN_002c34f8(0);
        return;
    }
    g_gameDataBlocks.unk00 = 1;
    FUN_002c34f8(1);
}

} /* extern "C" */
