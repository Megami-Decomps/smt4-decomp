#include "common.h"
#include "nn/Result.h"
#include "util/AsdFatalError.h"

extern "C" {
extern u32 DAT_0040b88c;
s32 FUN_003606dc(u32 handle, u32 first, u32 second, u32 third, u32 fourth);

/* Runs the service helper and reports a failure result as fatal. */
void FUN_00360328(u32 first, u32 second, u32 third, u32 fourth)
{
    u32 handle = DAT_0040b88c;
    s32 result = FUN_003606dc(handle, first, second, third, fourth);
    if (nnResultIsFailure(result)) {
        asdFatalError();
    }
}
}
