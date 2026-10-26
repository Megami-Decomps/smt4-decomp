/* NON_MATCHING: the build reserves 8 more bytes of frame (argument slot at 20 instead of 32, descriptor at 24 instead of 16) and orders the descriptor stores differently. */
#include "nn/Result.h"
#include "nn/os/ThreadLaunch.h"
#include "AsdSDK/Source/Net/Cec/AsdCecProcess.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/W6_W6Match3_OnlineValueCompletion.h"
#include "sys/ResultReport.h"

struct CecProcess;

extern "C" {
extern const char DAT_0052f4b0[];
void nn_os_CriticalSection_Initialize(void* section);
void* memAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 option, u32 mode);
void resultReportIfFailed(void* object, void* buffer, u32 size);
void FUN_00514a44(void);
void FUN_00514b7c(void);
void FUN_00514afc(void);
void FUN_0028196c(void *process);
s32 FUN_002fb0d4(ThreadHandleState *thread, const ThreadArgumentDescriptor *descriptor,
    ThreadEntryPoint entry, const void *argument, u32 stackTop, u32 priority, s32 cpu, bool owned);

// Initialize inbox accounting, allocate its worker stack, and start the CEC thread.
void FUN_0035af44(CecProcess* process)
{
    // The stack-memory object overlaps the older partial thread view; do not reshape it.
    struct StackMemoryView {
        u32 unk00;
        u32 handle;
        u32 base;
        u32 size;
    };
    struct ThreadView {
        u8 unk000[0xD34];
        ThreadHandleState thread;
        StackMemoryView stack;
    };
    typedef char ThreadOffsets[offsetof(ThreadView, thread) == 0xD34 &&
        offsetof(ThreadView, stack) == 0xD3C &&
        offsetof(ThreadView, stack.base) == 0xD44 &&
        offsetof(ThreadView, stack.size) == 0xD48 ? 1 : -1];
    AsdCecProcessWork* work = reinterpret_cast<AsdCecProcessWork*>(process);
    ThreadView* worker = reinterpret_cast<ThreadView*>(process);
    nn_os_CriticalSection_Initialize(work->inbox.lock);
    work->inbox.receivedCount = 0;
    work->inbox.requestedCount = asdCecInboxGetMessageCount();
    work->inbox.producedBatches = 0;
    work->inbox.consumedBatches = 0;
    asdDebugTrace(DAT_0052f4b0, 215);
    work->buffer = memAlloc(0x100, 0x100, 0, 0x1000, 0x1000, 1);
    resultReportIfFailed(&worker->stack, work->buffer, 0x1000);
    CecProcess* argument = process;
    ThreadArgumentDescriptor descriptor;
    descriptor.argumentSize = sizeof(CecProcess*);
    descriptor.callbacks[0] = FUN_00514a44;
    descriptor.callbacks[1] = FUN_00514b7c;
    descriptor.callbacks[2] = FUN_00514afc;
    s32 result = FUN_002fb0d4(&worker->thread, &descriptor, FUN_0028196c, &argument,
                             worker->stack.base + worker->stack.size, 17, -2, 0);
    if ((u32(result) & 0x07E00000) != 0x00600000 && nnResultIsFailure(result)) {
        FUN_002e3140(result);
    }
}
}
