/* NON_MATCHING: thread teardown (wait, joined flag, ~NnOsThread, stack lock, buffer free) now matches in shape and offsets; armcc computes the thread address (work + 0xd34) before the wait where retail does it after (add/add/mov r5, r0) and places the shared zero after the finalize instead of before the svc (same near miss as FUN_0035a840/FUN_003f19dc). */
#include "nn/Result.h"
#include "AsdSDK/Source/Net/Cec/AsdCecProcess.h"

extern "C" {
extern AsdCecProcessWork *g_cecProcess;
s32 svcWaitSynchronization1(u32 handle, s64 timeout);
void FUN_002e3140(s32 result);
void FUN_001469a8(void *thread);
void asdMemFree(void *memory);

void FUN_0036d41c()
{
    AsdCecProcessWork *work = g_cecProcess;
    if (work != 0) {
        s32 result = svcWaitSynchronization1(work->thread.handle, -1);
        if (nnResultIsFailure(result)) {
            FUN_002e3140(result);
        }
        work->thread.joined = 1;
        work->thread.~NnOsThread();
        FUN_001469a8(work->unkD3C);
        if (work->buffer != 0) {
            asdMemFree(work->buffer);
            work->buffer = 0;
        }
        work->state = -1;
    }
}
}
