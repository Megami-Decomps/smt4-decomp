#include "shard/Shard0047.h"

extern "C" {

extern s32 FUN_004d0ba4(s32 address);
extern s32 FUN_004d08d0(s32 address);

s32 FUN_0047c950(s32 base)
{
    s32 value = FUN_004d0ba4(base + 0x2E8);

    value = FUN_004d08d0(value - 0x34);
    return value - 0x2B4;
}

} /* extern "C" */
