/* NON_MATCHING: retail copies `b` into r6 before the second pair of calls and takes the first result in r4; here the registers are r5/r4. */
#include "common.h"

extern "C" {

extern int aocItemGetPrice(u32 handle);
extern int FUN_0049c9a0(u32 handle);

/* Comparison of two handles: by aocItemGetPrice, then by FUN_0049c9a0. */
int FUN_0049448c(u32 a, u32 b)
{
    int diff = aocItemGetPrice(a) - aocItemGetPrice(b);

    if (diff == 0) {
        diff = FUN_0049c9a0(a) - FUN_0049c9a0(b);
    }
    return diff;
}

}
