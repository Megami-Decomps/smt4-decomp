#include "common.h"
#include "nn/Result.h"

extern "C" {
extern u32 DAT_00588118;
s32 svcWaitSynchronization1(u32 handle, s64 timeout);
void FUN_002e3140(s32 result, bool failed);

/* Polls the network synchronization handle: true while the wait still times out. */
bool FUN_00432ad0(void)
{
    s32 result = svcWaitSynchronization1(DAT_00588118, 0);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        FUN_002e3140(result, failed);
    }
    nnResultFields code;
    code.value = result;
    if (code.fields.description != 0x3fe) {
        return false;
    }
    return true;
}

} /* extern "C" */
