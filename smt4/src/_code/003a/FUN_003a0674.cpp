/* NON_MATCHING: register allocation in the tie-break: retail copies b to r6 before the first call and keeps the result in r4; built keeps b in r4 and puts the result in r5. */
#include "common.h"

extern "C" {

extern s32 FUN_00230e04(u32 id);
extern s32 FUN_00230f44(u32 id);

static __inline s32 compareByPrimary(u32 a, u32 b)
{
    return FUN_00230e04(a) - FUN_00230e04(b);
}

static __inline s32 compareBySecondary(u32 a, u32 b)
{
    return FUN_00230f44(a) - FUN_00230f44(b);
}

/* qsort comparison of two ids: by FUN_00230e04, then by FUN_00230f44. */
s32 FUN_003a0674(u32 a, u32 b)
{
    s32 diff = compareByPrimary(a, b);

    if (diff == 0) {
        diff = compareBySecondary(a, b);
    }
    return diff;
}

} /* extern "C" */
