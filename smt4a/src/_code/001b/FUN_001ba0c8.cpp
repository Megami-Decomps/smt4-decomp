/* NON_MATCHING: code matches retail instruction for instruction (strd of the ring indices, result in the queue register) except callee-saved register numbering (retail: r6 semaphore address, r5 request, zero for the index wrap hoisted into r9 above the semaphore wait; here r5 semaphore, r6 request, zero loaded after the wait). */
#include "sys/FileWorkerQueue.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"

extern "C" {
s32 svcWaitSynchronization1(u32 handle, s64 timeout);
s32 FUN_0019a364(u32 *previousCount, u32 semaphore, u32 releaseCount);
void nnnstdMemCpy(void *destination, const void *source, u32 bytes);

// Copy a request into the next ring slot and advance the write index.
static FileQueueRequest *fileQueueStore(FileQueue *queue, const FileQueueRequest *request)
{
    FileQueueRequest *inserted = &queue->requests[queue->writeIndex];
    nnnstdMemCpy(inserted, request, sizeof(*inserted));
    queue->tailIndex = queue->writeIndex++;
    if (queue->writeIndex >= 96)
        queue->writeIndex = 0;
    return inserted;
}

// Append a copied request to the fixed ring and link it after the previous queued request.
FileQueueRequest *FUN_001ba0c8(FileQueue *queue, const FileQueueRequest *request)
{
    u32 *semaphore = &queue->semaphore;
    s32 result = svcWaitSynchronization1(*semaphore, -1);
    bool failed = nnResultIsFailure(result);
    if (failed)
        FUN_002e3140(result, failed);
    FileQueueRequest *inserted;
    if (queue->readIndex == queue->writeIndex) {
        inserted = fileQueueStore(queue, request);
    } else {
        FileQueueRequest *previous = &queue->requests[queue->tailIndex];
        inserted = fileQueueStore(queue, request);
        previous->next = inserted;
    }
    u32 previousCount;
    result = FUN_0019a364(&previousCount, *semaphore, 1);
    failed = nnResultIsFailure(result);
    if (failed)
        FUN_002e3140(result, failed);
    return inserted;
}
}
