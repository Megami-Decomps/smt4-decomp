#include "nn/Result.h"

extern "C" {

s32 FUN_00128d98(void);
int FUN_002c52f8(void);

/* Calls FUN_00128d98 and reports through FUN_002c52f8 when it returns a failure result. */
void nnResultCheckReport00128d98(void)
{
    if (nnResultIsFailure(FUN_00128d98())) {
        FUN_002c52f8();
    }
}

} /* extern "C" */
