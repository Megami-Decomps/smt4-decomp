/* NON_MATCHING: everything matches except that retail predicates the zero timeout (movne r2, #0; movne r3, r2) above the handle test's branch, where the build sets it after. */
#include "common.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"

struct Object0035d83c {
    /* 0x00 */ u8 unk00[0x44];
    /* 0x44 */ u32 handle;
};

extern "C" {

s32 svcWaitSynchronization1(u32 handle, s64 timeout);

/* Polls the object's handle (0x44) without waiting: 0 when the poll timed out, otherwise 1 (an error result is reported first). */
u32 FUN_0035d83c(Object0035d83c *object)
{
    bool timedOut = false;
    if (object->handle != 0) {
        s32 result = svcWaitSynchronization1(object->handle, 0);
        bool failed = nnResultIsFailure(result);
        if (failed)
            FUN_002e3140(result, failed);
        timedOut = !nnResultIsNotTimeout(result);
    }
    if (timedOut)
        return 0;
    return 1;
}

} /* extern "C" */
