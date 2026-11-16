#include "common.h"

extern "C" {

int __ARM_common_memcpy4_8(u32 a, u32 b);

void FUN_003e0bbc(u32 a, u32 b)
{
    __ARM_common_memcpy4_8(b, a);
}

} /* extern "C" */
