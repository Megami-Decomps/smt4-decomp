#include "common.h"
#include "nn/Result.h"

extern "C" {

/* A thread-like kernel object: its handle and a finalize flag. */
struct KernelThreadObject {
    /* 0x00 */ s32 handle;
    /* 0x04 */ u8 finalized;
};

s32 FUN_002c40f8(s32 *index, const s32 *handles, s32 count, s32 waitAll, s64 timeout);
void FUN_002c526c(s32 result);
void nn_os_Thread_FinalizeImpl(KernelThreadObject *thread);
void svcCloseHandle(s32 handle);

/* Waits for the thread's handle, finalizes the thread and closes the handle. */
void FUN_002ba8f4(KernelThreadObject *thread)
{
    if (thread->handle != 0) {
        s32 handle = thread->handle;
        s32 index;
        s32 result = FUN_002c40f8(&index, &handle, 1, 0, -1);
        if (nnResultIsFailure(result)) {
            FUN_002c526c(result);
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
