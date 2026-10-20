/* NON_MATCHING: the failure test is `lsrs r2, r0, #31` in retail (result stays in r0 and is moved into r1 only on the failure path); the built code moves it to r1 first */
/* Tail call into the function that follows (the same function on both paths). */
#include "nn/Result.h"

extern "C" {

s32 FUN_003535f0(u32 a, u32 b);
void FUN_002baa40(void *obj, s32 value);

void FUN_002baa04(void *obj, u32 a, u32 b)
{
    s32 result = FUN_003535f0(a, b);

    if (nnResultIsFailure(result)) {
        FUN_002baa40(obj, result);
    } else {
        FUN_002baa40(obj, 0);
    }
}

}
