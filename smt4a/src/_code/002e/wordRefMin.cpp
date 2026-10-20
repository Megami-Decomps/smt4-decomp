#include "common.h"

extern "C" {

/* Returns the pointer to the smaller of the two referenced words (the first on a tie). */
u32 *wordRefMin(u32 *a, u32 *b)
{
    if (*b < *a) {
        a = b;
    }
    return a;
}

} /* extern "C" */
