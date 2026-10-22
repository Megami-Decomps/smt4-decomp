/* Tail call into the function that follows (the same function on both paths). */
#include "nn/Result.h"

extern "C" {

s32 FUN_003535f0(u32 a, u32 b);
void _ZN18WindowStatusResultC1Ej(void *obj, s32 value);

void FUN_002baa04(void *obj, u32 a, u32 b)
{
    s32 result = FUN_003535f0(a, b);

    if (nnResultIsFailure(result)) {
        _ZN18WindowStatusResultC1Ej(obj, result);
    } else {
        _ZN18WindowStatusResultC1Ej(obj, 0);
    }
}

}
