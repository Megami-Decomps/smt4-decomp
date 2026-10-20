#include "common.h"

extern "C" {

/* Value of the digit or letter `c` (0-9, A-Z, a-z), or -1 when it is not below `base`. */
u32 digitValueInBase(u32 c, u32 base)
{
    if (c < '9' + 1) {
        c -= '0';
    }
    if ((c & ~0x20u) >= 'A') {
        c = (c & ~0x20u) - ('A' - 10);
    }
    if (c >= base) {
        c = (u32)-1;
    }
    return c;
}

} /* extern "C" */
