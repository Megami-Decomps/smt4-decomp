#include "shard/Shard0050.h"

extern "C" {

extern void __ARM_common_memcpy4_8(u32 *dest, u32 *src);

void FUN_00501fa4(u32 *a, u32 *b)
{
    __ARM_common_memcpy4_8(b, a);
}

} /* extern "C" */
