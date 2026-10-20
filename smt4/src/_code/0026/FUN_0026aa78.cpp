#include "common.h"

extern "C" {

extern int flagBitIsSet(u32 button);

/* Counts the held buttons 0x13-0x17, starting from 3 when button 0x12 is held (2 otherwise). */
int FUN_0026aa78(void)
{
    int count = 2;

    if (flagBitIsSet(0x12) != 0) {
        count = 3;
    }
    if (flagBitIsSet(0x13) != 0) {
        count = count + 1;
    }
    if (flagBitIsSet(0x14) != 0) {
        count = count + 1;
    }
    if (flagBitIsSet(0x15) != 0) {
        count = count + 1;
    }
    if (flagBitIsSet(0x16) != 0) {
        count = count + 1;
    }
    if (flagBitIsSet(0x17) != 0) {
        count = count + 1;
    }
    return count;
}

} /* extern "C" */
