#include "nn/Result.h"

extern "C" {

s32 FUN_0043acac(void);
int sysFatalBreak(void);

/* Calls FUN_0043acac and reports through sysFatalBreak when it returns a failure result. */
void FUN_0043a844(void)
{
    if (nnResultIsFailure(FUN_0043acac())) {
        sysFatalBreak();
    }
}

} /* extern "C" */
