#include "common.h"

extern "C" {
/* Tests the sign bit of a flag word. */
u8 FUN_002cbe5c(u32 value)
{
    s32 bit = value & 0x80000000;
    if (bit < 0)
        return 1;
    return 0;
}
}
