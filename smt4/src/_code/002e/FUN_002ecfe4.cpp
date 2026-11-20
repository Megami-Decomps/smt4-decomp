/* NON_MATCHING: FUN_002e2f14 shape; only scheduling remains: retail computes the thread address (add r0, r4, #1068) after the joined-flag store and copies it to r5, the build hoists it into r5 above the wait call. */
#include "nn/Result.h"
#include "nn/os/Thread.h"
#include "sys/ResultReport.h"
#include "cec/CecProcessGlobal.h"

extern "C" {


s32 svcWaitSynchronizationN(s32 *signaled, u32 *handles, s32 count, s32 waitAll, s64 timeout);
void addressSpaceRegionFree(void *queue);
void asdMemFree(void *block);

// Waits for the worker thread to end, then releases the thread, its queue and buffer.
void FUN_002ecfe4(void)
{
    CecProcess *process = g_cecProcess;
    if (process != NULL) {
        s32 signaled;
        u32 handles[1] = { process->thread.handle };
        s32 result = svcWaitSynchronizationN(&signaled, handles, 1, 0, -1);
        bool failed = nnResultIsFailure(result);
        if (failed) {
            resultHandleFailure(result, failed);
        }
        process->thread.joined = 1;
        /* Joined above: finalize the thread, then close its handle through the handle's destructor. */
        process->thread.finalize();
        process->thread.NnOsHandle::~NnOsHandle();
        addressSpaceRegionFree(process->queue);
        if (process->buffer != NULL) {
            asdMemFree(process->buffer);
            process->buffer = NULL;
        }
        process->state = -1;
    }
}

}
