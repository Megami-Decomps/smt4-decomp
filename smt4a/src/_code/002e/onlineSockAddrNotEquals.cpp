#include "common.h"

extern "C" {

u32 onlineSockAddrEquals(void);

/* Returns the low bit of onlineSockAddrEquals's result flipped. */
u32 onlineSockAddrNotEquals(void)
{
    u32 value;

    value = onlineSockAddrEquals();
    return value ^ 1;
}

} /* extern "C" */
