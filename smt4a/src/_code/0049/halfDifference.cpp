#include "shard/Shard0049.h"

extern "C" {

extern u16 FUN_0049c9a0(u16 *p);

/* Difference of FUN_0049c9a0(b) and FUN_0049c9a0(a). */
s32 halfDifference(u16 *a, u16 *b)
{
    s32 first = FUN_0049c9a0(a);
    s32 second = FUN_0049c9a0(b);

    return second - first;
}

} /* extern "C" */
