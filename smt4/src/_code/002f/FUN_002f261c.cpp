/* NON_MATCHING: retail compares the two ranks with `subs r0, r0, r6` followed by a linker NOP (a removed hook call) before the `bne`; built emits `cmp r0, r6` and no NOP. */
#include "common.h"

extern "C" {

s32 idIsAbove400(u32 id);
s32 recordKindRank(u32 id);
void FUN_002497f8(u32 *a, u32 *b);

/* Calls FUN_002497f8 on two ids when their ranks are equal (ids above 400 rank 99, others by recordKindRank). */
void FUN_002f261c(u32 *a, u32 *b)
{
    s32 rankA;
    s32 rankB;

    if (idIsAbove400(*a) != 0) {
        rankA = 99;
    } else {
        rankA = recordKindRank(*a);
    }
    if (idIsAbove400(*b) != 0) {
        rankB = 99;
    } else {
        rankB = recordKindRank(*b);
    }
    if (rankB != rankA) {
        return;
    }
    FUN_002497f8(a, b);
}

} /* extern "C" */
