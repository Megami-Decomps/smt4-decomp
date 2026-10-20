/* NON_MATCHING: register allocation only: retail keeps b in r4, a in r5 and the first key in r6 (then copies b to r6 for the tie-break call); the build uses r5/r6/r4. */
#include "common.h"

extern "C" {

extern int FUN_0049cad0(u32 id);
extern int FUN_0049c9a0(u32 id);

/* Compare function for sorting ids: by FUN_0049cad0 (descending), then by FUN_0049c9a0 (ascending). */
int FUN_004944d0(u32 a, u32 b)
{
    int keyA = FUN_0049cad0(a);
    int keyB = FUN_0049cad0(b);
    int diff = keyB - keyA;

    if (diff != 0) {
        return diff;
    }
    return FUN_0049c9a0(a) - FUN_0049c9a0(b);
}

} /* extern "C" */
