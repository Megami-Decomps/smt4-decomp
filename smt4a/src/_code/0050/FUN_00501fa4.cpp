#include "shard/Shard0050.h"

extern "C" {

extern void wordPairCopy(u32 *dest, u32 *src);

void FUN_00501fa4(u32 *a, u32 *b)
{
    wordPairCopy(b, a);
}

} /* extern "C" */
