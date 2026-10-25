#include "common.h"
#include "util/FUN_004268ec.h"

extern "C" {

s32 FUN_004268f0(u8 *out, u8 arg1, u32 arg2, u32 arg3);

/* Forwards to FUN_004268f0, the function that follows it. */
s32 FUN_004268ec(u8 *out, u8 arg1, u32 arg2, u32 arg3)
{
    return FUN_004268f0(out, arg1, arg2, arg3);
}

} /* extern "C" */
