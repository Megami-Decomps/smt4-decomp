#include "nn/Result.h"

extern "C" {

s32 FUN_0043aab4(void);
int sysFatalBreak(void);

/* Calls FUN_0043aab4 and reports through sysFatalBreak when it returns a failure result. */
void nnResultCheckReport0043aab4(void)
{
    if (nnResultIsFailure(FUN_0043aab4())) {
        sysFatalBreak();
    }
}

} /* extern "C" */
