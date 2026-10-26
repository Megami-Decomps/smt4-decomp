#include "nn/Result.h"

extern "C" {

s32 FUN_0043ac70(void);
int sysFatalBreak(void);

/* Calls FUN_0043ac70 and reports through sysFatalBreak when it returns a failure result. */
void FUN_0043a828(void)
{
    if (nnResultIsFailure(FUN_0043ac70())) {
        sysFatalBreak();
    }
}

} /* extern "C" */
