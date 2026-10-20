#include "common.h"

extern "C" {

/* Returns 1 when the two referenced words are equal. */
u32 wordRefsEqual_0030aa7a(s32 *a, s32 *b)
{
    if (*a == *b) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
