#include "common.h"

extern "C" {

s32 seq16IsEqual(void);
s32 seq16IsGreater(u16 a, u16 b);

/* True when seq16IsEqual holds, or `a` is ahead of `b` in 16-bit sequence order. */
u32 seq16IsGreaterOrFlag(u16 a, u16 b)
{
    return seq16IsEqual() || seq16IsGreater(a, b);
}

} /* extern "C" */
