#include "common.h"
#include "nn/Result.h"

extern "C" {

void asdFatalError(void);
s32 FUN_00360794(void);

/* Calls FUN_00360794 and raises a fatal error if it returns a failure result. */
void FUN_003603dc(void)
{
    if (nnResultIsFailure(FUN_00360794())) {
        asdFatalError();
    }
}

} /* extern "C" */
