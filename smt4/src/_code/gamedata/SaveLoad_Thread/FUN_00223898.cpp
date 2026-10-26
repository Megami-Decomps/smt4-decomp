/* NON_MATCHING: retail hoists &work->semaphore, 0 and the 0xE7E3FFFF default result into r7/r8/r6 before the first call and shares one stack slot for both semaphore calls; the build recomputes them and needs r9 plus a larger frame. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"

extern "C" {
struct ThreadArgTraits {
    u32 argSize;                                     // 0x00 size of the bound argument block
    void (*copy)(const void *src, void *dst);        // 0x04 FUN_003f6e84
    void (*invoke)(void *args);                      // 0x08 FUN_003f6fe4
    void (*destroy)(void *args);                     // 0x0c FUN_003f6f50
};
struct ThreadBoundArgs {
    void *owner;
};
struct SaveLoadThreadWork {
    u8 unk00;
    u8 kind;               // 0x01
    u8 unk02[0x26];
    void *stackMemory;     // 0x28
    u8 stackInfo[8];       // 0x2c
    u32 stackBase;         // 0x34
    u32 stackSize;         // 0x38
    u8 unk3c[8];
    u8 thread[8];          // 0x44
    u32 semaphore;         // 0x4c
};

s32 FUN_002c52dc(u32 *out, u32 initialCount, u32 maxCount);
s32 FUN_002c5254(u32 *out, u32 semaphore, u32 releaseCount);
s32 FUN_002cbe5c(s32 result);
void *memAlloc(u32 heap, u32 alignmentClass, u32 flags, u32 size, u32 alignment, u32 category);
s32 FUN_002bcc60(void *thread, const ThreadArgTraits *traits, void (*entry)(void *), ThreadBoundArgs *args,
                 u32 stackTop, u32 priority, s32 core, u32 detached);
void FUN_003f6e84(const void *, void *);
void FUN_003f6fe4(void *);
void FUN_003f6f50(void *);
void FUN_002ef878(void *);
void FUN_002d8e74(void *);
void FUN_002d8f3c(void *);

// Creates a semaphore and stores its handle in *out on success.
static __inline s32 createSemaphore(u32 *out, u32 initialCount, u32 maxCount)
{
    u32 handle = 0;
    s32 result = FUN_002c52dc(&handle, initialCount, maxCount);
    if (!nnResultIsFailure(result)) {
        *out = handle;
        result = 0;
    }
    return result;
}

// Releases a semaphore, discarding the previous count.
static __inline s32 releaseSemaphore(u32 semaphore, u32 releaseCount)
{
    u32 previousCount;
    return FUN_002c5254(&previousCount, semaphore, releaseCount);
}

// Runs `entry` on the worker thread with the work block bound as its argument; failures are reported.
static __inline s32 startWorkerThread(SaveLoadThreadWork *work, void (*entry)(void *))
{
    ThreadArgTraits traits;
    traits.argSize = 4;
    traits.copy = FUN_003f6e84;
    traits.invoke = FUN_003f6fe4;
    traits.destroy = FUN_003f6f50;
    ThreadBoundArgs args = {work};
    s32 result = FUN_002bcc60(work->thread, &traits, entry, &args, work->stackBase + work->stackSize, 17, -2, 0);
    if (nnResultIsFailureExceptSummary(result, 3)) {
        FUN_002c526c(result);
    }
    return result;
}

// Starts the save/load worker thread: creates its semaphore, allocates its stack and runs the entry that matches the
// request kind. Returns true when the thread was created.
bool FUN_00223898(SaveLoadThreadWork *work, u8 kind)
{
    work->kind = kind;

    s32 result = createSemaphore(&work->semaphore, 0, 1);
    if (nnResultIsFailure(result)) {
        FUN_002c526c(result);
    }
    result = releaseSemaphore(work->semaphore, 1);
    if (nnResultIsFailure(result)) {
        FUN_002c526c(result);
    }

    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\gamedata\\SaveLoad_Thread.cpp", 511);
    work->stackMemory = memAlloc(0x100, 0x100, 0, 0x2000, 0x1000, 1);
    resultReportIfFailed(work->stackInfo, work->stackMemory, 0x2000);

    s32 started = 0xE7E3FFFF;

    if (kind == 1) {
        started = startWorkerThread(work, FUN_002ef878);
    } else if (kind == 0 || kind == 3) {
        started = startWorkerThread(work, FUN_002d8e74);
    } else if (kind == 2) {
        started = startWorkerThread(work, FUN_002d8f3c);
    }
    return FUN_002cbe5c(started) == 0;
}
}
