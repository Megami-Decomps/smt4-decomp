/* NON_MATCHING: the shift count is built in r2 and the result via movne r0, #1 (retail: shift count in r3, movne r0, r1). */
#include "common.h"
#include "shard/gameFlagIsSet.h"

extern "C" {

u8 *gameFlagBlockGet(void);

/* Tests bit `index` of the flag bitmap returned by gameFlagBlockGet. */
bool gameFlagIsSet(u32 index)
{
    u8 *flags = gameFlagBlockGet();

    return (flags[index >> 3] & (1 << (index & 7))) != 0;
}

} /* extern "C" */
