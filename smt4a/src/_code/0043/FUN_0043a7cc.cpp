#include "nn/Result.h"

extern "C" {

s32 FUN_0043abf8(void);
int sysFatalBreak(void);

/* Calls FUN_0043abf8 and reports through sysFatalBreak when it returns a failure result. */
void FUN_0043a7cc(void)
{
    if (nnResultIsFailure(FUN_0043abf8())) {
        sysFatalBreak();
    }
}

} /* extern "C" */
