/* NON_MATCHING: retail inlines wait/close syscalls; this source calls their existing native wrappers. */
#include "AsdSDK/Source/Net/Cec/AsdCecProcess.h"

extern "C" {
extern AsdCecProcessWork *g_cecProcess;
u32 svcWaitSynchronization1(u32 handle, s64 timeout);
void FUN_002e3140(u32 result);
void nn_os_Thread_FinalizeImpl(ThreadHandleState *thread);
u32 svcCloseHandle(u32 handle);
void FUN_001469a8(void *thread);
void asdMemFree(void *memory);

void FUN_0036d41c()
{
    AsdCecProcessWork *work = g_cecProcess;
    if (work == 0) {
        return;
    }
    u32 result = svcWaitSynchronization1(work->syncHandle, -1);
    if (result >> 31) {
        FUN_002e3140(result);
    }
    work->stopRequested = 1;
    nn_os_Thread_FinalizeImpl(&work->thread);
    if (work->thread.handle != 0) {
        svcCloseHandle(work->thread.handle);
        work->thread.handle = 0;
    }
    FUN_001469a8(&work->unkD3C);
    if (work->buffer != 0) {
        asdMemFree(work->buffer);
        work->buffer = 0;
    }
    work->state = -1;
}
}
