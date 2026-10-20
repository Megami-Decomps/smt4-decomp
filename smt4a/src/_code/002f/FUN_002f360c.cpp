#include "common.h"

extern "C" {

u8 *FUN_002ede60(u8 *dest, u8 *source);

/* Assigns the 0x20-byte members of `b` into those of the object FUN_002ede60 returns for the first two arguments; returns the object. */
u8 *FUN_002f360c(u8 *a, u8 *b)
{
    u8 *target;

    target = FUN_002ede60(a, b);
    target = FUN_002ede60(target + 0x20, b + 0x20);
    return target - 0x20;
}

} /* extern "C" */
