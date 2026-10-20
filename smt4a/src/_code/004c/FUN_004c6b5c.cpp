/* NON_MATCHING: armcc folds the equality of the two flags into `eor` (and inverts them); retail compares them with `cmp r0, r1; moveq; movne`. */
#include "common.h"

extern "C" {

/* Whether `a` and `b` are on the same side of the range [4, 4 + 0x32). */
s32 FUN_004c6b5c(s32 a, s32 b)
{
    u32 x = (u32)(a - 4) >= 0x32;
    u32 y = (u32)(b - 4) >= 0x32;

    return x == y;
}

}
