#include "nn/Result.h"

extern "C" {

extern int asdFatalError(void);
extern s32 FUN_0036086c(void);

/* Raises a fatal error when FUN_0036086c returns a failed nn::Result. */
void FUN_003604d8(void)
{
    if (nnResultIsFailure(FUN_0036086c())) {
        asdFatalError();
    }
}

}
