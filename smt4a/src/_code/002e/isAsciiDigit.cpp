#include "common.h"

extern "C" {

/* Returns 1 when `character` is an ASCII digit. */
u32 isAsciiDigit(s32 character)
{
    if (character - 0x30U < 10) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
