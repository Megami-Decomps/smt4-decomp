#include "common.h"

extern "C" {

s32 FUN_002efb80(void);
s32 seq16IsGreater(u16 a, u16 b);

/* True when FUN_002efb80 holds, or `a` is ahead of `b` in 16-bit sequence order. */
u32 seq16IsGreaterOrFlag(u16 a, u16 b)
{
    return FUN_002efb80() || seq16IsGreater(a, b);
}

} /* extern "C" */
