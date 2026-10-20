#include "common.h"

extern "C" {

u8 *onlineSockAddrConstruct2(u8 *dest, u8 *source);

/* Assigns the 0x20-byte members of `b` into those of the object onlineSockAddrConstruct2 returns for the first two arguments; returns the object. */
u8 *FUN_002f360c(u8 *a, u8 *b)
{
    u8 *target;

    target = onlineSockAddrConstruct2(a, b);
    target = onlineSockAddrConstruct2(target + 0x20, b + 0x20);
    return target - 0x20;
}

} /* extern "C" */
