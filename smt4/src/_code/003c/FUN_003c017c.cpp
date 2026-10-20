/* NON_MATCHING: the prologue copies of the arguments are emitted in the order r7, r8, r6 (retail: r6, r7, r8). */
#include "common.h"
extern "C" {

extern int FUN_002550d8(...);
int abs(int);

/* Sums the absolute values of the results of up to three queries on `obj`, chosen by `mode` (0, 1, 2 one query, 3 all of them). */
int FUN_003c017c(u32 obj, s32 mode, u32 a, u32 b)
{
    s32 total = 0;
    if (mode == 0 || mode == 3) {
        total = abs(FUN_002550d8(obj, 7));
        FUN_002550d8(obj, 8, a, b);
    }
    if (mode == 1 || mode == 3) {
        total += abs(FUN_002550d8(obj, 10, a, b));
    }
    if (mode == 2 || mode == 3) {
        total += abs(FUN_002550d8(obj, 11, a, b));
        FUN_002550d8(obj, 9, a, b);
    }
    return total;
}
}
