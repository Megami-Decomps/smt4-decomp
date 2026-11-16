/* NON_MATCHING: code, frame layout and row count match retail; only callee-saved numbering differs (retail: r5 request, r6 semaphore address computed before the queue copy; here r5 semaphore, r6 request). */
#include "sys/FileWorkerQueue.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"
extern "C" {
s32 FUN_002c40f8(s32 *index, const u32 *handles, s32 count, s32 waitAll, s64 timeout);
s32 FUN_002c5254(u32 *previousCount, u32 semaphore, u32 releaseCount);
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

// Append a copied request to the fixed ring and link it after the previous queued request.
FileQueueRequest *FUN_002a2f08(FileQueue *queue, const FileQueueRequest *request)
{

    u32 *semaphore = &queue->semaphore;
    u32 handle = *semaphore;
    s32 index;
    s32 result = FUN_002c40f8(&index, &handle, 1, 0, -1);
    bool failed = nnResultIsFailure(result);
    if (failed)
        FUN_002c526c(result, failed);
    FileQueueRequest *inserted;
    if (queue->readIndex == queue->writeIndex) {
        inserted = fileQueueStore(queue, request);
    } else {
        FileQueueRequest *previous = &queue->requests[queue->tailIndex];
        inserted = fileQueueStore(queue, request);
        previous->next = inserted;
    }
    {
        u32 previousCount;
        result = FUN_002c5254(&previousCount, *semaphore, 1);
        failed = nnResultIsFailure(result);
        if (failed)
            FUN_002c526c(result, failed);
    }
    return inserted;
}
}
