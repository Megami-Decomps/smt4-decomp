/* nn::os's WaitObject::WaitOne and Thread::Join as Apocalypse's SDK inlines them: WaitSynchronization1 on the handle
 * with no timeout, a failed wait reported, then the thread marked joined (IV's SDK waits through
 * WaitSynchronizationN: smt4/include/nn/os/WaitObject.h). */
#ifndef SMT4A_NN_OS_WAITOBJECT_H
#define SMT4A_NN_OS_WAITOBJECT_H

#include "nn/Result.h"
#include "nn/os/Thread.h"
#include "sys/ResultReport.h"

extern "C" s32 svcWaitSynchronization1(u32 handle, s64 timeout);

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

/* Thread::Join: waits for the thread to end, then marks it joined. */
static __inline void ThreadJoin(NnOsThread *thread)
{
    WaitOne(thread);
    thread->joined = 1;
}

} /* namespace os */
} /* namespace nn */

#endif
