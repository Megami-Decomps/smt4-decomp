#include "common.h"

extern "C" {

/* Returns the pointer to the smaller of the two referenced bytes (the first on a tie). */
u8 *byteRefMin(u8 *a, u8 *b)
{
    if (*b < *a) {
        a = b;
    }
    return a;
}

} /* extern "C" */
