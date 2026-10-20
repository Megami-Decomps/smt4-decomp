#include "common.h"

extern "C" {

u8 *onlineSockAddrConstruct2(u8 *dest, u8 *source);

/* Assigns `c` into the 0x20-byte member of the object onlineSockAddrConstruct2 returns for the first two arguments. */
void FUN_002f35a4(u8 *a, u8 *b, u8 *c)
{
    u8 *target;

    target = onlineSockAddrConstruct2(a, b);
    onlineSockAddrConstruct2(target + 0x20, c);
}

} /* extern "C" */
