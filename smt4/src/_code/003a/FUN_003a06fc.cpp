/* NON_MATCHING: register allocation only: retail keeps a/b in r5/r4 and re-copies b into r6 before the second FUN_00230f44 call; built keeps them in r6/r5. */
#include "common.h"

extern "C" {

s32 FUN_00230e04(u32 id);
s32 FUN_00230f44(u32 id);

/* Orders two ids by FUN_00230e04 descending, then by FUN_00230f44 ascending. */
s32 FUN_003a06fc(u32 a, u32 b)
{
    s32 keyA = FUN_00230e04(a);
    s32 diff = FUN_00230e04(b) - keyA;

    if (diff == 0) {
        diff = FUN_00230f44(a) - FUN_00230f44(b);
    }
    return diff;
}

} /* extern "C" */
