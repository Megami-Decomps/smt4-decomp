/* NON_MATCHING: retail keeps the zero for the index wrap in r9 from the top of the function, ends both arms with `mov r4, r7` (result in the queue register) and stores the two ring indices with one strd; armcc schedules these differently. */
#include "sys/FileWorkerQueue.h"
#include "nn/Result.h"
#include "sys/ResultReport.h"

extern "C" {
s32 svcWaitSynchronization1(u32 handle, s64 timeout);
s32 FUN_0019a364(u32 *previousCount, u32 semaphore, u32 releaseCount);
void nnnstdMemCpy(void *destination, const void *source, u32 bytes);

// Append a copied request to the fixed ring and link it after the previous queued request.
FileQueueRequest *FUN_001ba0c8(FileQueue *queue, const FileQueueRequest *request)
{
    s32 result = svcWaitSynchronization1(queue->semaphore, -1);
    bool failed = nnResultIsFailure(result);
    if (failed)
        FUN_002e3140(result, failed);
    FileQueueRequest *inserted;
    if (queue->readIndex == queue->writeIndex) {
        inserted = &queue->requests[queue->writeIndex];
        nnnstdMemCpy(inserted, request, sizeof(*inserted));
        queue->tailIndex = queue->writeIndex++;
        if (queue->writeIndex >= 96)
            queue->writeIndex = 0;
    } else {
        FileQueueRequest *previous = &queue->requests[queue->tailIndex];
        inserted = &queue->requests[queue->writeIndex];
        nnnstdMemCpy(inserted, request, sizeof(*inserted));
        queue->tailIndex = queue->writeIndex++;
        if (queue->writeIndex >= 96)
            queue->writeIndex = 0;
        previous->next = inserted;
    }
    u32 previousCount;
    result = FUN_0019a364(&previousCount, queue->semaphore, 1);
    failed = nnResultIsFailure(result);
    if (failed)
        FUN_002e3140(result, failed);
    return inserted;
}
}
