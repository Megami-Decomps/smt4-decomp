/* NON_MATCHING: the shift count is built in r2 and the result via movne r0, #1 (retail: shift count in r3, movne r0, r1). */
#include "common.h"

extern "C" {

u8 *FUN_002adc88(u32 index);

/* Tests bit `index` of the flag bitmap returned by FUN_002adc88. */
bool FUN_002c09d0(u32 index)
{
    u8 *flags = FUN_002adc88(index);

    return (flags[index >> 3] & (1 << (index & 7))) != 0;
}

} /* extern "C" */
