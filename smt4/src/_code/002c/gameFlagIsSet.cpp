/* NON_MATCHING: the shift count is built in r2 and the result via movne r0, #1 (retail: shift count in r3, movne r0, r1). */
#include "common.h"

extern "C" {

u8 *gameGetFlagBlock(u32 index);

/* Tests bit `index` of the flag bitmap returned by gameGetFlagBlock. */
bool gameFlagIsSet(u32 index)
{
    u8 *flags = gameGetFlagBlock(index);

    return (flags[index >> 3] & (1 << (index & 7))) != 0;
}

} /* extern "C" */
