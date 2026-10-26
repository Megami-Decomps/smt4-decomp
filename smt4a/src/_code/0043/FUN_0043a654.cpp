#include "nn/Result.h"

extern "C" {

s32 FUN_0043aa0c(void);
int sysFatalBreak(void);

/* Calls FUN_0043aa0c and reports through sysFatalBreak when it returns a failure result. */
void FUN_0043a654(void)
{
    if (nnResultIsFailure(FUN_0043aa0c())) {
        sysFatalBreak();
    }
}

} /* extern "C" */
