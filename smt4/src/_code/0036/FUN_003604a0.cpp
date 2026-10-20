#include "nn/Result.h"

extern "C" {

void asdFatalError(void);
s32 FUN_00360800(u32 arg);

/* Calls FUN_00360800 and aborts when it returns a failed nn::Result. */
void FUN_003604a0(u32 arg)
{
    if (nnResultIsFailure(FUN_00360800(arg))) {
        asdFatalError();
    }
}

} /* extern "C" */
