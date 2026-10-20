/* NON_MATCHING: retail compares the two ranks with `subs r0, r0, r6` followed by a linker NOP (a removed hook call) before the `bne`; built emits `cmp r0, r6` and no NOP. */
#include "common.h"

extern "C" {

s32 idIsAbove400(u32 id);
s32 FUN_0039a598(u32 id);
void FUN_003811ec(u32 *a, u32 *b);

/* Calls FUN_003811ec on two ids when their ranks are equal (ids above 400 rank 99, others by FUN_0039a598). */
void FUN_00375874(u32 *a, u32 *b)
{
    s32 rankA;
    s32 rankB;

    if (idIsAbove400(*a) != 0) {
        rankA = 99;
    } else {
        rankA = FUN_0039a598(*a);
    }
    if (idIsAbove400(*b) != 0) {
        rankB = 99;
    } else {
        rankB = FUN_0039a598(*b);
    }
    if (rankB != rankA) {
        return;
    }
    FUN_003811ec(a, b);
}

} /* extern "C" */
