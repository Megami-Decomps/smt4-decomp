/* NON_MATCHING: retail copies the second operand (mov r2, r1) before umull; the build issues umull on the argument registers directly. */
#include "common.h"

extern "C" {
u64 mulU32ToU64(u32 a, u32 b)
{
    return (u64)a * (u64)b;
}
}
