/* NON_MATCHING: retail stores an uninitialised VFP register (s16) as the thread argument (the original passed an unset
 * local, undefined behaviour this source does not reproduce); the worker ignores its argument and gets 0.0f here. */
#include "AsdSDK/AsdDebug.h"
#include "nn/os/ThreadLaunch.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"

/* The loader's globals in Apocalypse: the worker's stack memory and mapping follow the stop flag. */
struct AsdFileWorker {
    /* 0x00 */ u8 stopRequested;
    /* 0x01 */ u8 unk01[0xF];
    /* 0x10 */ void *stackMemory;
    /* 0x14 */ ThreadStackStorage *threadStack;
};

extern "C" {
extern AsdFileWorker g_asdFile;
extern const char DAT_0053d448[]; /* the AsdFile.cpp path */
extern u8 g_asdFileWorkerThread[]; /* the worker thread's handle and joined flag */

void *memAlloc(u32 heap, u32 alignmentClass, u32 flags, u32 size, u32 alignment, u32 category);
void *asdMemoryAllocTraced(u32 size, const char *file, u32 line);
void resultReportIfFailed(ThreadStackStorage *stack, void *memory, u32 size);
s32 FUN_002fb0d4(void *thread, const ThreadArgumentDescriptor *descriptor, void (*entry)(void *), void *argument,
                 u32 stackTop, s32 priority, s32 processor, u32 flags);
void FUN_0014b66c(void *argument);
void copyValueIfDestination(void);
void FUN_00100326(void);
void emptyStub_0010032c(void);

/* nn::os::Thread::Start: runs `entry(argument)` on a new thread whose stack is `stack`; a failure is reported. */
static __inline void asdFileStartThread(void *thread, void (*entry)(void *), f32 argument, ThreadStackStorage &stack,
                                       s32 priority, s32 processor)
{
    ThreadArgumentDescriptor descriptor;
    descriptor.argumentSize = sizeof(argument);
    descriptor.callbacks[0] = copyValueIfDestination;
    descriptor.callbacks[1] = emptyStub_0010032c;
    descriptor.callbacks[2] = FUN_00100326;
    s32 result = FUN_002fb0d4(thread, &descriptor, entry, &argument, stack.info.address + stack.info.size, priority,
                              processor, 0);
    if (nnResultIsFailureExceptSummary(result, 3)) {
        resultHandleFailure(result);
    }
}

/* Starts the file worker thread on a 4 KB stack. */
void asdFileStartWorkerThread(void)
{
    g_asdFile.stopRequested = 0;
    asdDebugTrace(DAT_0053d448, 956);
    g_asdFile.stackMemory = memAlloc(0x100, 0x100, 0, 0x1000, 0x1000, 1);
    ThreadStackStorage *stack = (ThreadStackStorage *)asdMemoryAllocTraced(sizeof(ThreadStackStorage), DAT_0053d448, 957);
    if (stack != NULL) {
        stack->info.unk00 = 0;
        stack->info.unk04 = 0;
        stack->info.address = 0;
        stack->info.size = 0;
        stack->owned = 0;
    }
    g_asdFile.threadStack = stack;
    resultReportIfFailed(stack, g_asdFile.stackMemory, 0x1000);
    asdFileStartThread(g_asdFileWorkerThread, FUN_0014b66c, 0.0f, *g_asdFile.threadStack, 18, -2);
}
}
