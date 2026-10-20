#include "shard/Shard0031.h"

extern "C" {

/* Iterator inequality: true when the two point at different elements. */
u32 iterNotEqual(void **a, void **b)
{
    if (*a != *b) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
