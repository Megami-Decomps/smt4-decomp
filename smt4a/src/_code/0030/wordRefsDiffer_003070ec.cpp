#include "common.h"

extern "C" {

/* Returns 1 when the two referenced words differ. */
u32 wordRefsDiffer_003070ec(s32 *a, s32 *b)
{
    if (*a != *b) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
