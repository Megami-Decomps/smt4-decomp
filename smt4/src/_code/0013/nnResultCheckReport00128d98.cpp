#include "nn/Result.h"

extern "C" {

s32 FUN_00128d98(void);
int asdFatalError(void);

/* Calls FUN_00128d98 and reports through asdFatalError when it returns a failure result. */
void nnResultCheckReport00128d98(void)
{
    if (nnResultIsFailure(FUN_00128d98())) {
        asdFatalError();
    }
}

} /* extern "C" */
