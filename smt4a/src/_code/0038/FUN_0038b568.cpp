#include "shard/Shard0038.h"

extern "C" {

extern u32 FUN_002adc20(u32 a, s32 b);

u8 FUN_0038b568(u32 a, s32 b)
{
    return FUN_002adc20(a, b) != 0;
}

} /* extern "C" */
