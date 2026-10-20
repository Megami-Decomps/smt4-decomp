#include "common.h"

extern "C" {

/* Returns the pointer to the larger of the two referenced words (the first one on a tie). */
u32 *wordRefMax(u32 *a, u32 *b)
{
    if (*a < *b) {
        a = b;
    }
    return a;
}

} /* extern "C" */
