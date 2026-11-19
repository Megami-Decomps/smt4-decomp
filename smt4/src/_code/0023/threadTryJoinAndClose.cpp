/* NON_MATCHING: only the frame `sub sp` differs: retail schedules it after the first handle read (the linker-inlined handleObjectGetHandle), the build before. */
#include "common.h"
#include "nn/Result.h"
#include "sys/HandleWait.h"
#include "sys/KernelThread.h"

extern "C" {

/* Joins the thread, finalizes it and closes its handle; returns 0 while a zero-timeout poll of the handle still times out, else 1. */
u32 threadTryJoinAndClose(KernelThreadObject *thread)
{
    bool running = false;
    if (handleObjectGetHandle(thread) != 0) {
        s32 result = handleWait(thread->handle, 0);
        running = nnResultIsNotTimeout(result) != 1;
    }
    if (running) {
        return 0;
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
