#include "shard/Shard0045.h"

extern "C" {

extern u32 *setMinus1ReturnPtr(u32 *value);

/* Applies setMinus1ReturnPtr to four consecutive words starting at `value`, returning the address of the block start. */
u32 *setFourMinus1(u32 *value)
{
    u32 *p = setMinus1ReturnPtr(value);

    p = setMinus1ReturnPtr(p + 1);
    p = setMinus1ReturnPtr(p + 1);
    p = setMinus1ReturnPtr(p + 1);
    return p - 3;
}

} /* extern "C" */
