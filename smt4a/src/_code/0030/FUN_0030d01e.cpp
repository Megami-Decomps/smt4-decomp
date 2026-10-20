#include "common.h"

extern "C" {

/* Returns 1 when the byte `*a` is below `*b`. */
u32 FUN_0030d01e(u8 *a, u8 *b)
{
    if (*a < *b) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
