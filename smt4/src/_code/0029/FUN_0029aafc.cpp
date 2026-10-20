#include "common.h"

extern "C" {

extern int flagBitIsSet(u32 button);

/* Counts the held buttons 0x78-0x7A on top of 4 (5 when 0x77 is held), capped at 8. */
int FUN_0029aafc(void)
{
    int count = 4;

    if (flagBitIsSet(0x77) != 0) {
        count = 5;
    }
    if (flagBitIsSet(0x78) != 0) {
        count = count + 1;
    }
    if (flagBitIsSet(0x79) != 0) {
        count = count + 1;
    }
    if (flagBitIsSet(0x7a) != 0) {
        count = count + 1;
    }
    if (count > 8) {
        count = 8;
    }
    return count;
}

} /* extern "C" */
