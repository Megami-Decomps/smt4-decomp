/* NON_MATCHING: only the thread-start stack-argument setup differs (retail stores the uninitialised argument slot first and orders the descriptor/argument stores and literal pool differently) */
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
extern u8 DAT_005b3fcc[]; /* the worker thread's handle and joined flag */

void *memAlloc(u32 heap, u32 alignmentClass, u32 flags, u32 size, u32 alignment, u32 category);
void *FUN_00178b04(u32 size, const char *file, u32 line);
void resultReportIfFailed(ThreadStackStorage *stack, void *memory, u32 size);
s32 FUN_002fb0d4(void *thread, const ThreadArgumentDescriptor *descriptor, void (*entry)(void *), void *argument,
                 u32 stackTop, s32 priority, s32 processor, u32 flags);
void FUN_0014b66c(void *argument);
void copyValueIfDestination(void);
void FUN_00100326(void);
void emptyStub_0010032c(void);

/* Starts the file worker thread on a 4 KB stack. */
void FUN_0014287c(void)
{
    f32 unset;
    g_asdFile.stopRequested = 0;
    asdDebugTrace(DAT_0053d448, 956);
    g_asdFile.stackMemory = memAlloc(0x100, 0x100, 0, 0x1000, 0x1000, 1);
    ThreadStackStorage *stack = (ThreadStackStorage *)FUN_00178b04(sizeof(ThreadStackStorage), DAT_0053d448, 957);
    if (stack != NULL) {
        stack->info.unk00 = 0;
        stack->info.unk04 = 0;
        stack->info.address = 0;
        stack->info.size = 0;
        stack->owned = 0;
    }
    g_asdFile.threadStack = stack;
    resultReportIfFailed(stack, g_asdFile.stackMemory, 0x1000);
    f32 argument = unset;
    ThreadArgumentDescriptor descriptor;
    descriptor.argumentSize = 4;
    descriptor.callbacks[0] = copyValueIfDestination;
    descriptor.callbacks[1] = emptyStub_0010032c;
    descriptor.callbacks[2] = FUN_00100326;
    ThreadStackInfo *info = &g_asdFile.threadStack->info;
    s32 result = FUN_002fb0d4(DAT_005b3fcc, &descriptor, FUN_0014b66c, &argument, info->size + info->address, 18, -2, 0);
    if (nnResultIsFailureExceptSummary(result, 3)) {
        FUN_002e3140(result);
    }
}
}
