/* nn::os's WaitObject::WaitOne and Thread::Join as IV's SDK inlines them: the handle copied into a one-entry list
 * for WaitSynchronizationN with no timeout, a failed wait reported, then the thread marked joined. Join's own inline
 * boundary keeps the wait apart from the joined store: armcc forms the thread's address for the finalize afterwards
 * (cecProcessStopWorker). */
#ifndef SMT4_NN_OS_WAITOBJECT_H
#define SMT4_NN_OS_WAITOBJECT_H

#include "nn/Result.h"
#include "nn/os/Thread.h"
#include "sys/ResultReport.h"

extern "C" s32 svcWaitSynchronizationN(s32 *signaled, u32 *handles, s32 count, s32 waitAll, s64 timeout);

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

/* Thread::Join: waits for the thread to end, then marks it joined. */
static __inline void ThreadJoin(NnOsThread *thread)
{
    WaitOne(thread);
    thread->joined = 1;
}

} /* namespace os */
} /* namespace nn */

#endif
