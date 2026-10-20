#include "common.h"

extern "C" {

/* Returns 1 when the word `*a` is below `*b` (the first argument is unused). */
u32 lessU32(u32 unused, u32 *a, u32 *b)
{
    if (*a < *b) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
