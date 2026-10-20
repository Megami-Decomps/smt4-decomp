/* NON_MATCHING: the shifted constant 1 lands in r1 where retail uses r3. */
#include "common.h"

extern "C" {

u8 *gameDataGetFlagBits(void);

/* Tests flag number `bit` in the flag set returned by gameDataGetFlagBits. */
u8 flagBitIsSet(u32 bit)
{
    u8 *bits = gameDataGetFlagBits();

    return (bits[bit >> 3] & (1 << (bit & 7))) != 0;
}

} /* extern "C" */
