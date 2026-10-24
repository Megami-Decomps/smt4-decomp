/* NON_MATCHING: the loop matches except armcc writes `sub` + `cmp` where retail has one `subs` before the nop hint. */
#include "common.h"

extern "C" {

/* Busy-wait: burns `count` units, two per iteration (the nop hint keeps the loop from being removed). */
void FUN_00138398(s32 count)
{
    do {
        count -= 2;
        __nop();
    } while (count > 0);
}

} /* extern "C" */
