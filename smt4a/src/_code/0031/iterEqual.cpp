#include "shard/Shard0031.h"

extern "C" {

/* Iterator equality: true when the two point at the same elements. */
u32 iterEqual(void **a, void **b)
{
    if (*a == *b) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
