#include "shard/GameDataBlocks.h"

extern "C" {

int FUN_002c34f8(int arg);

void FUN_0026b584(u32 flags)
{
    g_gameDataBlocks.unk00 = 0;
    g_gameDataBlocks.unk10 = flags | g_gameDataBlocks.unk10;
    FUN_002c34f8(0);
}

} /* extern "C" */
