#include "common.h"

extern "C" {

s32 FUN_00153630(s32 a, u32 b, u32 c, u32 d, s32 e);
int eventTexCallIfMatch(s32 a, u32 b, s32 c);

/* Calls eventTexCallIfMatch unless FUN_00153630 (given all four arguments and -1) reports non-zero; returns 1. */
u32 FUN_0013dadc(s32 a, u32 b, u32 c, u32 d)
{
    if (FUN_00153630(a, b, c, d, -1) == 0) {
        eventTexCallIfMatch(a, b, 0);
    }
    return 1;
}

} /* extern "C" */
