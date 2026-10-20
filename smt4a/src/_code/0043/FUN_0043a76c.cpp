#include "nn/Result.h"

extern "C" {

s32 FUN_0043ab20(void);
int sysFatalBreak(void);

/* Returns the result of FUN_0043ab20 when it is the 0xc9405001 code; any other result is reported if it is a failure and mapped to 0. */
s32 FUN_0043a76c(void)
{
    s32 result = FUN_0043ab20();

    if (result != (s32)0xc9405001) {
        if (nnResultIsFailure(result)) {
            sysFatalBreak();
        }
        result = 0;
    }
    return result;
}

} /* extern "C" */
