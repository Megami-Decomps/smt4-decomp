#include "shard/Shard0046.h"

extern "C" {

extern s32 FUN_001b2d88(u32 a, u32 type, u32 b);

u8 aocHasType36(u32 a, u32 b)
{
    return FUN_001b2d88(a, 0x36, b) != 0;
}

} /* extern "C" */
