#include "shard/Shard0050.h"

extern "C" {

extern void FUN_001a9110(u32 *dest, u32 *src);

void FUN_00501fa4(u32 *a, u32 *b)
{
    FUN_001a9110(b, a);
}

} /* extern "C" */
