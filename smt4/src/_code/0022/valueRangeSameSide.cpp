#include "common.h"

extern "C" {

/* Whether `value` lies outside the range [4, 4 + 0x32). */
static inline s32 isOutsideRange(s32 value)
{
    if ((u32)(value - 4) < 0x32) {
        return 0;
    }
    return 1;
}

/* Whether `a` and `b` are on the same side of the range [4, 4 + 0x32). */
s32 valueRangeSameSide(s32 a, s32 b)
{
    return isOutsideRange(a) == isOutsideRange(b);
}

}
