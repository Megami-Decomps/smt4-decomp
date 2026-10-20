#include "common.h"

extern "C" {

s32 FUN_003521cc(u8 *out, u8 arg1, u32 arg2, u32 arg3);

/* Forwards to FUN_003521cc, the function that follows it. */
s32 FUN_003521c8(u8 *out, u8 arg1, u32 arg2, u32 arg3)
{
    return FUN_003521cc(out, arg1, arg2, arg3);
}

} /* extern "C" */
