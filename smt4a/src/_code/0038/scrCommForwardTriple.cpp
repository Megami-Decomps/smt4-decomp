/* NON_MATCHING: retail uses `mov r4, r0` where armcc emits `mov r5, r0`. */
#include "common.h"

extern "C" {

s32 scrGetArg(u32 index);
void FUN_003e4b2c(s32 first, s32 second, u16 third);

s32 scrCommForwardTriple(void)
{
    s32 first = scrGetArg(0);
    s32 second = scrGetArg(1);
    u16 third = (u16)scrGetArg(2);
    FUN_003e4b2c(first, second, third);
    return 1;
}

} /* extern "C" */
