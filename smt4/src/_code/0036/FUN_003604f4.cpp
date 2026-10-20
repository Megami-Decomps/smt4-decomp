#include "nn/Result.h"

extern "C" {

s32 FUN_003608a8(void);
int asdFatalError(void);

/* Returns the result of FUN_003608a8 when it is the 0xc9405001 code; any other result is reported if it is a failure and mapped to 0. */
s32 FUN_003604f4(void)
{
    s32 result = FUN_003608a8();

    if (result != (s32)0xc9405001) {
        if (nnResultIsFailure(result)) {
            asdFatalError();
        }
        result = 0;
    }
    return result;
}

} /* extern "C" */
