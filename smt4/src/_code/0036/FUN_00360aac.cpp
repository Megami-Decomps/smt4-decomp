#include "nn/Result.h"

extern "C" {

void asdFatalError(void);
s32 FUN_00360a70(u32 arg);

/* Calls FUN_00360a70 and aborts when it returns a failed nn::Result. */
void FUN_00360aac(u32 arg)
{
    if (nnResultIsFailure(FUN_00360a70(arg))) {
        asdFatalError();
    }
}

} /* extern "C" */
