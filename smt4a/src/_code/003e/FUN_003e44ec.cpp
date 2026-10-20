/* NON_MATCHING: the constant 1 is held in r1 (retail: r3). */
#include "common.h"

extern "C" {

u8 *gameDataBlockGetArea28350(u32 index);

/* Tests bit `index` of the flag bitmap returned by gameDataBlockGetArea28350. */
bool FUN_003e44ec(u32 index)
{
    u8 *flags = gameDataBlockGetArea28350(index);

    return (flags[index >> 3] & (1 << (index & 7))) != 0;
}

} /* extern "C" */
