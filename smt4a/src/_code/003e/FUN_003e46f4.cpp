/* NON_MATCHING: register choice only: retail uses r3 (not r1) for the constant 1 */
/* Returns whether flag `bit` is set in the flag array. */
#include "common.h"

extern "C" {

extern u8 *gameDataBlockGetArea2D68(void);

u8 FUN_003e46f4(u32 bit)
{
    u8 *flags = gameDataBlockGetArea2D68();

    return (flags[bit >> 3] & (1 << (bit & 7))) != 0;
}

}
