/* nn::os's WaitObject::WaitOne and Thread::Join as IV's SDK inlines them: the handle copied into a one-entry list
 * for WaitSynchronizationN with no timeout, a failed wait reported, then the thread marked joined. Join's own inline
 * boundary keeps the wait apart from the joined store: armcc forms the thread's address for the finalize afterwards
 * (cecProcessStopWorker). WaitObject::WaitAny waits through WaitMultiple (FUN_003573a4, the SDK's out-of-line
 * wait on a list of objects), reports a failed wait and returns the index of the signalled object
 * (the movie reader's thread, s4FsReaderThreadMain). */
#ifndef SMT4_NN_OS_WAITOBJECT_H
#define SMT4_NN_OS_WAITOBJECT_H

#include "nn/Result.h"
#include "nn/fnd/TimeSpan.h"
#include "nn/os/Thread.h"
#include "sys/ResultReport.h"

extern "C" s32 svcWaitSynchronizationN(s32 *signaled, u32 *handles, s32 count, s32 waitAll, s64 timeout);
/* WaitObject::WaitMultiple: `objects` holds the addresses of the objects (their handle is their first word). */
extern "C" s32 FUN_003573a4(s32 *signaled, const u32 *objects, s32 count, s32 waitAll, s64 timeout);

namespace nn {
namespace os {

/* WaitObject::WaitOne: waits until the object is signalled (a thread: until it ends). */
static __inline void WaitOne(NnOsHandle *object)
{
    s32 signaled;
    u32 handles[1] = { object->handle };
    s32 result = svcWaitSynchronizationN(&signaled, handles, 1, 0, -1);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        resultHandleFailure(result, failed);
    }
}

/* The timed WaitOne returns the result so the caller can distinguish a timeout. */
static __inline s32 WaitOne(const NnOsHandle *object, nn::fnd::TimeSpan timeout)
{
    s32 signaled;
    u32 handles[1] = { object->handle };
    s32 result = svcWaitSynchronizationN(&signaled, handles, 1, 0, timeout.nanoseconds);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        resultHandleFailure(result, failed);
    }
    return result;
}

/* WaitObject::WaitAny: waits until one of the objects is signalled and returns its index. */
static __inline s32 WaitAny(const u32 *objects, s32 count)
{
    s32 signaled;
    s32 result = FUN_003573a4(&signaled, objects, count, 0, -1);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        resultHandleFailure(result, failed);
    }
    return signaled;
}

/* Thread::Join: waits for the thread to end, then marks it joined. */
static __inline void ThreadJoin(NnOsThread *thread)
{
    WaitOne(thread);
    thread->joined = 1;
}

} /* namespace os */
} /* namespace nn */

#endif
