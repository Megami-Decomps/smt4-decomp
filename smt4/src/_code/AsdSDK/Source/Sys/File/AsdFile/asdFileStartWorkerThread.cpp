/* NON_MATCHING: retail passes an uninitialised register (r4) as the allocator's second argument and as the thread
 * argument (the original read unset locals, undefined behaviour this source does not reproduce); here both get 0
 * (the worker ignores its argument), so the frame and the argument stores differ. */
#include "AsdSDK/Source/Sys/File/AsdFile.h"
#include "AsdSDK/AsdDebug.h"
#include "nn/os/AddressSpaceManager.h"
#include "nn/os/ThreadLaunch.h"
#include "nn/Result.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "sys/ResultReport.h"

extern "C" {
extern AsdFileGlobals g_asdFile;
extern const char DAT_00409764[];
extern u8 g_asdFileThread[]; /* the worker thread's handle and joined flag */

void *memAlloc(u32 heap, u32 alignmentClass, u32 flags, u32 size, u32 alignment, u32 category);
s32 FUN_002bcc60(void *thread, const ThreadArgumentDescriptor *descriptor, void (*entry)(void *), void *argument,
                 u32 stackTop, s32 priority, s32 processor, u32 flags);
void FUN_00123c88(void);
void FUN_00123ca4(void);
void FUN_00123cb4(void);

/* nn::os::Thread::Start: runs `entry(argument)` on a new thread whose stack is `stack`; a failure is reported. */
static __inline void asdFileStartThread(void *thread, void (*entry)(void *), u32 argument, ThreadStackStorage &stack,
                                       s32 priority, s32 processor)
{
    ThreadArgumentDescriptor descriptor;
    descriptor.argumentSize = sizeof(argument);
    descriptor.callbacks[0] = FUN_00123c88;
    descriptor.callbacks[1] = FUN_00123cb4;
    descriptor.callbacks[2] = FUN_00123ca4;
    s32 result = FUN_002bcc60(thread, &descriptor, entry, &argument, stack.info.address + stack.info.size, priority,
                              processor, 0);
    if (nnResultIsFailureExceptSummary(result, 3)) {
        resultHandleFailure(result);
    }
}

/* Starts the file worker thread on a 4 KB stack. */
void asdFileStartWorkerThread(void)
{
    g_asdFile.stopRequested = 0;
    asdDebugTrace(DAT_00409764, 833);
    g_asdFile.unk18 = (u32)memAlloc(0x100, 0x100, 0, 0x1000, 0x1000, 1);
    ThreadStackStorage *stack = (ThreadStackStorage *)asdOperatorNew(sizeof(ThreadStackStorage), NULL);
    if (stack != NULL) {
        stack->info.unk00 = 0;
        stack->info.unk04 = 0;
        stack->info.address = 0;
        stack->info.size = 0;
        stack->owned = 0;
    }
    g_asdFile.threadStack = (AddressSpaceRegion *)stack;
    resultReportIfFailed(stack, (void *)g_asdFile.unk18, 0x1000);
    asdFileStartThread(g_asdFileThread, asdFileThreadMain, 0, *(ThreadStackStorage *)g_asdFile.threadStack, 18, -2);
}
}
