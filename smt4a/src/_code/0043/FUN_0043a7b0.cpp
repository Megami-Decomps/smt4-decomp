#include "nn/Result.h"

extern "C" {

s32 FUN_0043abbc(void);
int sysFatalBreak(void);

/* Calls FUN_0043abbc and reports through sysFatalBreak when it returns a failure result. */
void FUN_0043a7b0(void)
{
    if (nnResultIsFailure(FUN_0043abbc())) {
        sysFatalBreak();
    }
}

} /* extern "C" */
