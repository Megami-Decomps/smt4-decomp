#include "common.h"
#include "nn/Result.h"

extern "C" {

extern s32 FUN_00360944(u8 value);
extern int asdFatalError(void);

/* Sends the requested service setting and raises a fatal error on failure. */
void FUN_00360538(u8 value)
{
    s32 result = FUN_00360944(value);

    if (nnResultIsFailure(result)) {
        asdFatalError();
    }
}

} /* extern "C" */
