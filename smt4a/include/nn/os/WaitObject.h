/* nn::os's WaitObject::WaitOne and Thread::Join as Apocalypse's SDK inlines them: WaitSynchronization1 on the handle
 * with no timeout, a failed wait reported, then the thread marked joined (IV's SDK waits through
 * WaitSynchronizationN: smt4/include/nn/os/WaitObject.h). WaitObject::WaitAny waits through WaitMultiple
 * (FUN_0042cd0c, the SDK's out-of-line wait on a list of objects), reports a failed wait and returns the index of
 * the signalled object (the movie reader's thread, s4FsReaderThreadMain). */
#ifndef SMT4A_NN_OS_WAITOBJECT_H
#define SMT4A_NN_OS_WAITOBJECT_H

#include "nn/Result.h"
#include "nn/os/Thread.h"
#include "sys/ResultReport.h"

extern "C" s32 svcWaitSynchronization1(u32 handle, s64 timeout);
/* WaitObject::WaitMultiple: `objects` holds the addresses of the objects (their handle is their first word). */
extern "C" s32 FUN_0042cd0c(s32 *signaled, const u32 *objects, s32 count, s32 waitAll, s64 timeout);

namespace nn {
namespace os {

/* WaitObject::WaitOne: waits until the object is signalled (a thread: until it ends). */
static __inline void WaitOne(NnOsHandle *object)
{
    s32 result = svcWaitSynchronization1(object->handle, -1);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        resultHandleFailure(result, failed);
    }
}

/* WaitObject::WaitAny: waits until one of the objects is signalled and returns its index. */
static __inline s32 WaitAny(const u32 *objects, s32 count)
{
    s32 signaled;
    s32 result = FUN_0042cd0c(&signaled, objects, count, 0, -1);
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
