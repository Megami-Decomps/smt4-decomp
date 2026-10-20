#include "common.h"
#include "nn/Result.h"

extern "C" {

void asdFatalError(void);
s32 FUN_00360a34(void);

/* Calls FUN_00360a34 and raises a fatal error if it returns a failure result. */
void FUN_003605cc(void)
{
    if (nnResultIsFailure(FUN_00360a34())) {
        asdFatalError();
    }
}

} /* extern "C" */
