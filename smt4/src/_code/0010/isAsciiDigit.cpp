#include "common.h"

extern "C" {

/* Returns 1 when `c` is an ASCII decimal digit. */
u32 isAsciiDigit(s32 c)
{
    if ((u32)(c - '0') < 10) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
