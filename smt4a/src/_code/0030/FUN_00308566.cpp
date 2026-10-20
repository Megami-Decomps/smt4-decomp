#include "common.h"

extern "C" {

/* Returns 1 when the halfword `*a` is below `*b` (the first argument is unused). */
u32 FUN_00308566(u32 unused, u16 *a, u16 *b)
{
    if (*a < *b) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
