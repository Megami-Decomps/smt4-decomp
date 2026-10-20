#include "common.h"

extern "C" {

u32 FUN_0015a2d8(void);
s32 FUN_0018b65c(void);

/* Returns 1 when FUN_0018b65c is nonzero and both bit 29 and bit 28 of the flags word are set. */
u32 FUN_0015a3d0(void)
{
    u32 flags;
    s32 enabled;
    u32 result;

    flags = FUN_0015a2d8();
    enabled = FUN_0018b65c();
    if ((enabled == 0 || (flags & 0x20000000) == 0) || ((flags & 0x10000000) == 0)) {
        result = 0;
    } else {
        result = 1;
    }
    return result;
}

} /* extern "C" */
