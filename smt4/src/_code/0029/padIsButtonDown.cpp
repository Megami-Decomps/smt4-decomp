/* NON_MATCHING: the shifted constant 1 lands in r1 where retail uses r3. */
#include "common.h"

extern "C" {

u8 *FUN_0023f3f8(void);

/* Tests flag number `bit` in the flag set returned by FUN_0023f3f8. */
u8 padIsButtonDown(u32 bit)
{
    u8 *bits = FUN_0023f3f8();

    return (bits[bit >> 3] & (1 << (bit & 7))) != 0;
}

} /* extern "C" */
