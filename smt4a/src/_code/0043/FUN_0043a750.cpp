#include "nn/Result.h"

extern "C" {

s32 FUN_0043aae4(void);
int sysFatalBreak(void);

/* Calls FUN_0043aae4 and reports through sysFatalBreak when it returns a failure result. */
void FUN_0043a750(void)
{
    if (nnResultIsFailure(FUN_0043aae4())) {
        sysFatalBreak();
    }
}

} /* extern "C" */
