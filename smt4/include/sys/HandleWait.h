/* Waiting on a single kernel handle (smt4). */
#ifndef SMT4_SYS_HANDLEWAIT_H
#define SMT4_SYS_HANDLEWAIT_H

#include "common.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"

extern "C" {

/* Waits for any of `count` handles (or all of them when `waitAll`) up to `timeout` nanoseconds (-1: forever);
   `*index` receives the signalled handle's position. */
s32 svcWaitSynchronizationN(s32 *index, const u32 *handles, s32 count, s32 waitAll, s64 timeout);

/* Waits on one handle for `timeout`; a failed wait is reported. Returns the wait's result code. */
static __inline s32 handleWait(u32 handle, s64 timeout)
{
    s32 index;
    s32 result = svcWaitSynchronizationN(&index, &handle, 1, 0, timeout);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        resultHandleFailure(result, failed);
    }
    return result;
}

/* Releases `releaseCount` slots of the semaphore `semaphore`; `*out` receives the count before the release. */
s32 svcReleaseSemaphore(u32 *out, u32 semaphore, u32 releaseCount);

/* Releases `releaseCount` slots of the semaphore `semaphore`; a failed release is reported. Returns the
   release's result code. The file loader pairs it with handleWait around every use of its request lock. */
static __inline s32 semaphoreRelease(u32 semaphore, u32 releaseCount)
{
    u32 count;
    s32 result = svcReleaseSemaphore(&count, semaphore, releaseCount);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        resultHandleFailure(result, failed);
    }
    return result;
}

} /* extern "C" */

#endif
