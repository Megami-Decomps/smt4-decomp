/* Waiting on a single kernel handle (smt4). */
#ifndef SMT4_SYS_HANDLEWAIT_H
#define SMT4_SYS_HANDLEWAIT_H

#include "common.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"

extern "C" {

/* Waits for any of `count` handles (or all of them when `waitAll`) up to `timeout` nanoseconds (-1: forever);
   `*index` receives the signalled handle's position. */
s32 FUN_002c40f8(s32 *index, const u32 *handles, s32 count, s32 waitAll, s64 timeout);

/* Waits on one handle for `timeout`; a failed wait is reported. Returns the wait's result code. */
static __inline s32 handleWait(u32 handle, s64 timeout)
{
    s32 index;
    s32 result = FUN_002c40f8(&index, &handle, 1, 0, timeout);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        FUN_002c526c(result, failed);
    }
    return result;
}

} /* extern "C" */

#endif
