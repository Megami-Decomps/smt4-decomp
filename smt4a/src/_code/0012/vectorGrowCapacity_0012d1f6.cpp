#include "common.h"

extern "C" {

/* Vector growth policy: the new capacity is the larger of capacity + 0x20 and capacity * 1.625. */
u32 vectorGrowCapacity_0012d1f6(u32 capacity)
{
    u32 grown = (capacity >> 1) + capacity + (capacity >> 3);

    if (capacity + 0x20 <= grown) {
        return grown;
    }
    return capacity + 0x20;
}

} /* extern "C" */
