/* NON_MATCHING: only the thread-start stack-argument setup differs (retail stores the argument slot first and keeps flags in a separate store, frame 40 vs 36 bytes) */
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
void asdFileThreadMain(void *argument);
void FUN_00123c88(void);
void FUN_00123ca4(void);
void FUN_00123cb4(void);

/* Starts the file worker thread on a 4 KB stack. */
void FUN_0010d0f8(void)
{
    u32 owner;
    g_asdFile.stopRequested = 0;
    asdDebugTrace(DAT_00409764, 833);
    g_asdFile.unk18 = (u32)memAlloc(0x100, 0x100, 0, 0x1000, 0x1000, 1);
    ThreadStackStorage *stack = (ThreadStackStorage *)asdOperatorNew(sizeof(ThreadStackStorage), reinterpret_cast<void *>(owner));
    if (stack != NULL) {
        stack->info.unk00 = 0;
        stack->info.unk04 = 0;
        stack->info.address = 0;
        stack->info.size = 0;
        stack->owned = 0;
    }
    g_asdFile.threadStack = (AddressSpaceRegion *)stack;
    resultReportIfFailed(stack, (void *)g_asdFile.unk18, 0x1000);
    u32 argument = owner;
    ThreadArgumentDescriptor descriptor;
    descriptor.argumentSize = 4;
    descriptor.callbacks[0] = FUN_00123c88;
    descriptor.callbacks[1] = FUN_00123cb4;
    descriptor.callbacks[2] = FUN_00123ca4;
    ThreadStackInfo *info = &((ThreadStackStorage *)g_asdFile.threadStack)->info;
    s32 result = FUN_002bcc60(g_asdFileThread, &descriptor, asdFileThreadMain, &argument,
                              info->address + info->size, 18, -2, 0);
    if (nnResultIsFailureExceptSummary(result, 3)) {
        FUN_002c526c(result);
    }
}
}
