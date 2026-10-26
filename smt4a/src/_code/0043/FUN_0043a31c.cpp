#include "nn/Result.h"

extern "C" {

s32 FUN_0043a860(void);
int sysFatalBreak(void);

/* Calls FUN_0043a860 and reports through sysFatalBreak when it returns a failure result. */
void FUN_0043a31c(void)
{
    if (nnResultIsFailure(FUN_0043a860())) {
        sysFatalBreak();
    }
}

} /* extern "C" */
