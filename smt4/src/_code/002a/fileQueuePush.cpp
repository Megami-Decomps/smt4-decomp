#include "sys/FileWorkerQueue.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"
extern "C" {
s32 svcWaitSynchronizationN(s32 *index, const u32 *handles, s32 count, s32 waitAll, s64 timeout);
s32 svcReleaseSemaphore(u32 *previousCount, u32 semaphore, u32 releaseCount);
void *nnnstdMemCpy(void *destination, const void *source, u32 bytes);

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

// Wait on the queue's semaphore and report a failure.
static __inline void semaphoreAcquire(u32 *semaphore)
{
    u32 handle = *semaphore;
    s32 index;
    s32 result = svcWaitSynchronizationN(&index, &handle, 1, 0, -1);
    bool failed = nnResultIsFailure(result);
    if (failed)
        resultHandleFailure(result, failed);
}

// Release the queue's semaphore once and report a failure.
static __inline void semaphoreRelease(u32 *semaphore)
{
    u32 previousCount;
    s32 result = svcReleaseSemaphore(&previousCount, *semaphore, 1);
    bool failed = nnResultIsFailure(result);
    if (failed)
        resultHandleFailure(result, failed);
}

// Append a copied request to the fixed ring and link it after the previous queued request.
FileQueueRequest *fileQueuePush(FileQueue *queue, const FileQueueRequest *request)
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
