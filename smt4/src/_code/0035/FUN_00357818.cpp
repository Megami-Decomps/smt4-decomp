/* NON_MATCHING: retail keeps a zero field term (mov r1, #0; orr r0, r1, r0, lsl #8) that the build folds away. */
#include "common.h"

extern "C" {
s32 FUN_00357818(u32 value)
{
    return (value & 0xFF0FFFFF) << 8;
}
}
