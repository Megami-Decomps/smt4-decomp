#include "nn/Result.h"

extern "C" {

s32 FUN_0043aa78(void);
int sysFatalBreak(void);

/* Calls FUN_0043aa78 and reports through sysFatalBreak when it returns a failure result. */
void FUN_0043a718(void)
{
    if (nnResultIsFailure(FUN_0043aa78())) {
        sysFatalBreak();
    }
}

} /* extern "C" */
