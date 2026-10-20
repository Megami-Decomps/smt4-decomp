#include "common.h"

extern "C" {

/* Compares the two referenced words: 0 when equal, otherwise their difference. */
s32 FUN_0030fe5c(s32 *a, s32 *b)
{
    if (*a == *b) {
        return 0;
    }
    return *a - *b;
}

} /* extern "C" */
