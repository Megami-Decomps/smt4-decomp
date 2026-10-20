#include "nn/Result.h"

extern "C" {

s32 FUN_0043aab4(void);
int FUN_00195fc8(void);

/* Calls FUN_0043aab4 and reports through FUN_00195fc8 when it returns a failure result. */
void nnResultCheckReport0043aab4(void)
{
    if (nnResultIsFailure(FUN_0043aab4())) {
        FUN_00195fc8();
    }
}

} /* extern "C" */
