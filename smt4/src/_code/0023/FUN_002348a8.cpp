/* NON_MATCHING: retail materialises the timeout compare as a bool (movne/moveq/teq, then movne r0,#0) where this build folds it into one branch; the frame `sub sp` is scheduled after the first handle load. */
#include "common.h"
#include "nn/Result.h"
#include "sys/HandleWait.h"
#include "sys/KernelThread.h"

extern "C" {

/* Joins the thread, finalizes it and closes its handle; returns 0 if a poll of the handle times out first, else 1. */
u32 FUN_002348a8(KernelThreadObject *thread)
{
    if (threadGetHandle(thread) != 0) {
        s32 result = handleWait(thread->handle, 0);
        if (nnResultIsNotTimeout(result) != 1) {
            return 0;
        }
    }
    handleWait(thread->handle, -1);
    thread->finalized = 1;
    nn_os_Thread_FinalizeImpl(thread);
    if (thread->handle != 0) {
        svcCloseHandle(thread->handle);
        thread->handle = 0;
    }
    return 1;
}

} /* extern "C" */
