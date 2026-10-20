#include "common.h"

extern "C" {

s32 onlineSockAddrLess(u8 *a, u8 *b);

/* Returns 1 unless `b` is ordered before `c` by onlineSockAddrLess on the first key and, on a tie, on the 0x20-byte second key. */
u32 FUN_002f35b6(u32 unused, u8 *b, u8 *c)
{
    s32 result;

    result = onlineSockAddrLess(b, c);
    if ((result == 0) &&
        ((result = onlineSockAddrLess(c, b), result != 0 || (result = onlineSockAddrLess(b + 0x20, c + 0x20), result == 0)))) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
