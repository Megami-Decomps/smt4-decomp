#include "common.h"
#include "nn/Result.h"
#include "sys/HandleWait.h"
#include "sys/KernelThread.h"

extern "C" {

/* Waits for the thread's handle, finalizes the thread and closes the handle. */
void kernelThreadJoinAndClose(KernelThreadObject *thread)
{
    if (thread->handle != 0) {
        u32 handle = thread->handle;
        s32 index;
        s32 result = FUN_002c40f8(&index, &handle, 1, 0, -1);
        bool failed = nnResultIsFailure(result);
        if (failed) {
            FUN_002c526c(result, failed);
        }
        thread->finalized = 1;
        nn_os_Thread_FinalizeImpl(thread);
        if (thread->handle != 0) {
            svcCloseHandle(thread->handle);
            thread->handle = 0;
        }
    }
}

} /* extern "C" */
