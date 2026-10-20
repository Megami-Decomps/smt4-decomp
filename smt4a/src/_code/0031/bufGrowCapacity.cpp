#include "shard/Shard0031.h"

extern "C" {

/* The next capacity of a growing buffer: about 1.625x, but at least 0x20 more. */
u32 bufGrowCapacity(u32 size)
{
    u32 grown = size + (size >> 1) + (size >> 3);
    u32 minimum = size + 0x20;

    if (minimum <= grown) {
        return grown;
    }
    return minimum;
}

} /* extern "C" */
