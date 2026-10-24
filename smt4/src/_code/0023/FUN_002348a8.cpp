/* NON_MATCHING: retail loads the handle again after the test (no shared ldr), keeps the failure test in r1 and materialises the timeout compare as a bool (movne/moveq/teq) before returning it. */
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

/* Waits on the thread's handle for `timeout`. */
static __inline s32 threadWait(KernelThreadObject *thread, s64 timeout)
{
    s32 handle = thread->handle;
    s32 index;
    s32 result = FUN_002c40f8(&index, &handle, 1, 0, timeout);
    if (nnResultIsFailure(result)) {
        FUN_002c526c(result);
    }
    return result;
}

/* Joins the thread, finalizes it and closes its handle; returns 0 if a poll of the handle times out first, else 1. */
u32 FUN_002348a8(KernelThreadObject *thread)
{
    if (thread->handle != 0) {
        s32 result = threadWait(thread, 0);
        nnResultFields fields;
        fields.value = result;
        if (fields.fields.description == 0x3fe) {
            return 0;
        }
    }
    threadWait(thread, -1);
    thread->finalized = 1;
    nn_os_Thread_FinalizeImpl(thread);
    if (thread->handle != 0) {
        svcCloseHandle(thread->handle);
        thread->handle = 0;
    }
    return 1;
}

} /* extern "C" */
