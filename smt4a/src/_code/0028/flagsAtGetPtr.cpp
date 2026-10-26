#include "shard/GameDataBlocks.h"

extern "C" {
s32 flagsAtGetPtr(s32 offset)
{
    u8 *base = (u8 *)g_gameDataBlocks.saveBlock + offset;
    return (s32)(base + 0x2831C);
}
}
