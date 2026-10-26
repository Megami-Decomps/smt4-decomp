#include "nn/Result.h"

extern "C" {

s32 FUN_0016f1d4(void);
int sysFatalBreak(void);

/* Calls FUN_0016f1d4 and reports through sysFatalBreak when it returns a failure result. */
void FUN_00188e0c(void)
{
    if (nnResultIsFailure(FUN_0016f1d4())) {
        sysFatalBreak();
    }
}

} /* extern "C" */
