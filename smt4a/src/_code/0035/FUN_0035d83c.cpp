/* NON_MATCHING: the svc setup now matches (real svcWaitSynchronization1 wrapper, timeout 0); retail keeps the failure test as `lsrs r1, r0, #31` before copying the result to r4 and materializes the "not a timeout" test as a bool (movne/moveq/teq), which the build folds. */
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
    u32 handle = object->handle;
    if (handle != 0) {
        s32 result = svcWaitSynchronization1(handle, 0);
        bool failed = nnResultIsFailure(result);
        if (failed)
            FUN_002e3140(result, failed);
        if ((result & 0x3ff) == 0x3fe)
            return 0;
    }
    return 1;
}

} /* extern "C" */
