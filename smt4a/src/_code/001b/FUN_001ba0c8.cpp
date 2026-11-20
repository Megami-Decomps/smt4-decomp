/* NON_MATCHING: semaphore wait/release helpers (as in the smt4 twin fileQueuePush) give retail's registers; only the zero for the ring-index wrap (r9) is set after the semaphore wait here, retail sets it before the svc (FUN_0036d41c, FUN_00159e68, FUN_0015f0f4 and FUN_00422654 show the same zero-before-svc 0x24 placement; multifile with the callees does not reproduce it). */
#include "sys/FileWorkerQueue.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"

extern "C" {
s32 svcWaitSynchronization1(u32 handle, s64 timeout);
s32 svcReleaseSemaphore(u32 *previousCount, u32 semaphore, u32 releaseCount);
void nnnstdMemCpy(void *destination, const void *source, u32 bytes);

// Copy a request into the next ring slot and advance the write index.
static __inline FileQueueRequest *fileQueueStore(FileQueue *queue, const FileQueueRequest *request)
{
    FileQueueRequest *inserted = &queue->requests[queue->writeIndex];
    nnnstdMemCpy(inserted, request, sizeof(*inserted));
    queue->tailIndex = queue->writeIndex++;
    if (queue->writeIndex >= 96)
        queue->writeIndex = 0;
    return inserted;
}

/* Waits on the queue semaphore, reporting a failed wait. */
static __inline void semaphoreAcquire(u32 *semaphore)
{
    s32 result = svcWaitSynchronization1(*semaphore, -1);
    bool failed = nnResultIsFailure(result);
    if (failed)
        resultHandleFailure(result, failed);
}

/* Releases the queue semaphore once, reporting a failed release. */
static __inline void semaphoreRelease(u32 *semaphore)
{
    u32 previousCount;
    s32 result = svcReleaseSemaphore(&previousCount, *semaphore, 1);
    bool failed = nnResultIsFailure(result);
    if (failed)
        resultHandleFailure(result, failed);
}

// Append a copied request to the fixed ring and link it after the previous queued request.
FileQueueRequest *FUN_001ba0c8(FileQueue *queue, const FileQueueRequest *request)
{
    semaphoreAcquire(&queue->semaphore);
    FileQueueRequest *inserted;
    if (queue->readIndex == queue->writeIndex) {
        inserted = fileQueueStore(queue, request);
    } else {
        FileQueueRequest *previous = &queue->requests[queue->tailIndex];
        inserted = fileQueueStore(queue, request);
        previous->next = inserted;
    }
    semaphoreRelease(&queue->semaphore);
    return inserted;
}
}
