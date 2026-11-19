/* NON_MATCHING: retail hoists the zero for the handle reset into r6 at entry (`mov r6, #0` after the first handle read, `str r6, [r4]` at the end); the build materialises it at the store. */
#include "nn/Result.h"
#include "nn/os/Thread.h"
#include "nn/svc.h"
#include "sys/ResultReport.h"

extern "C" s32 svcWaitSynchronization1(u32 handle, s64 timeout); /* svc 0x24 */

/* Waits on the thread's handle, reporting a failed wait; returns the wait's result. */
static __inline s32 threadWait(NnOsThread *thread, s64 timeout)
{
    s32 result = svcWaitSynchronization1(thread->handle, timeout);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        resultHandleFailure(result, failed);
    }
    return result;
}

/* True when the thread has ended (a zero-timeout wait did not time out). */
static __inline bool threadTryWait(NnOsThread *thread)
{
    return nnResultIsNotTimeout(threadWait(thread, 0));
}

extern "C" {

// Joins the thread once it has finished: false while it is still running, otherwise waits for it,
// finalizes it, closes its handle and returns true.
bool threadTryJoinAndClose(NnOsThread *thread)
{
    bool running = false;
    if (handleObjectGetHandle(thread) != 0) {
        running = threadTryWait(thread) != 1;
    }
    if (running) {
        return false;
    }
    threadWait(thread, -1);
    thread->joined = 1;
    thread->~NnOsThread();
    return true;
}

}
