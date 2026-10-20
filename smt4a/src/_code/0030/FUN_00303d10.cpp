/* NON_MATCHING: the argument swap goes through r3 in the other direction (retail: r3 = b, b slot = c, c slot = r3). */
#include "common.h"

extern "C" {

extern void FUN_003113ee(u32 a, u32 c, u32 b);

/* Forwards its arguments with the last two swapped. */
void FUN_00303d10(u32 a, u32 b, u32 c)
{
    FUN_003113ee(a, c, b);
}

} /* extern "C" */
