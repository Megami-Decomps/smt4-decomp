/* NON_MATCHING: semaphore/descriptor stack slots, result predicates, and launch-branch register scheduling differ. */
#include "gamedata/SaveLoadThreadRequest.h"
#include "AsdSDK/AsdDebug.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"

extern "C" {
s32 FUN_0014a930(u32 *handle, u32 initialCount, u32 maxCount);
s32 FUN_0019a364(u32 *previousCount, u32 semaphore, u32 releaseCount);
void *memAlloc(u32 heap, u32 alignmentClass, u32 option, u32 size, u32 alignment, u32 fromFront);
void resultReportIfFailed(ThreadStackStorage *stack, void *buffer, u32 size);
s32 FUN_002fb0d4(ThreadHandleState *thread, const ThreadArgumentDescriptor *descriptor,
    ThreadEntryPoint entry, const void *argument, u32 stackTop, u32 priority, s32 cpu, bool owned);
void FUN_00514a34(const void *source, void *destination);
void FUN_00514b78(void *argument);
void FUN_00514af0(ThreadEntryPoint entry, void *argument);
void saveLoadReadThreadWorker(void *request);
void FUN_00371100(void *request);
void FUN_00349ca4(void *request);
void FUN_00349e60(void *request);
s32 FUN_0032c8c8(s32 result);
}

static inline s32 initializeSaveSemaphore(u32 *semaphore)
{
    u32 handle = 0;
    if (*semaphore != 0)
        return (s32)0xe0a0183b;
    s32 result = FUN_0014a930(&handle, 0, 1);
    if (nnResultIsSuccess(result)) {
        *semaphore = handle;
        result = 0;
    }
    return result;
}

static inline s32 releaseSaveSemaphore(u32 semaphore)
{
    u32 previousCount;
    return FUN_0019a364(&previousCount, semaphore, 1);
}

static inline s32 startSaveLoadWorker(SaveLoadThreadRequest *request, ThreadEntryPoint worker)
{
    ThreadArgumentDescriptor descriptor;
    descriptor.argumentSize = sizeof(request);
    descriptor.operations.copy = FUN_00514a34;
    descriptor.operations.destroy = FUN_00514b78;
    descriptor.operations.invoke = FUN_00514af0;
    SaveLoadThreadRequest *argument = request;
    s32 result = FUN_002fb0d4(&request->thread, &descriptor, worker, &argument,
        request->stack.info.address + request->stack.info.size, 0x11, -2, false);
    if (nnResultIsFailureExceptSummary(result, 3))
        FUN_002e3140(result);
    return result;
}

// Create the save worker's semaphore and aligned stack, then launch the requested operation.
extern "C" bool FUN_0031ed60(SaveLoadThreadRequest *request, s32 mode)
{
    request->mode = (u8)mode;
    s32 status = initializeSaveSemaphore(&request->semaphore);
    bool creationFailed = nnResultIsFailure(status);
    if (creationFailed)
        FUN_002e3140(status);
    status = releaseSaveSemaphore(request->semaphore);
    bool releaseFailed = nnResultIsFailure(status);
    if (releaseFailed)
        FUN_002e3140(status);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\gamedata\\SaveLoad_Thread.cpp", 938);
    request->stackAllocation = memAlloc(0x100, 0x100, 0, 0x2000, 0x1000, 1);
    resultReportIfFailed(&request->stack, request->stackAllocation, 0x2000);

    s32 result = (s32)0xe7e3ffff;
    if (mode == 1) {
        result = startSaveLoadWorker(request, FUN_00371100);
    } else if (mode == 0 || mode == 3 || mode == 5) {
        result = startSaveLoadWorker(request, saveLoadReadThreadWorker);
    } else if (mode == 2) {
        result = startSaveLoadWorker(request, FUN_00349ca4);
    } else if (mode == 4) {
        result = startSaveLoadWorker(request, FUN_00349e60);
    }
    return FUN_0032c8c8(result) == 0;
}
