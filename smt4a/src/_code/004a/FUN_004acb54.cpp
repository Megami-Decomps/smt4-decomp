/* NON_MATCHING: payload load scheduling and transfer-queue register allocation differ. */
#include "shard/CircularTransferQueue.h"

extern "C" {
u32 FUN_00521984(void *, const TransferDescriptor *);
void FUN_00521d14(TransferDescriptorRing *, u32, u32);
}

/* Forward the next queued transfer and reclaim its descriptor and byte range. */
extern "C" u32 FUN_004acb54(CircularTransferQueue *queue)
{
    if (queue->descriptors.pending == 0) {
        return 0;
    }
    if (FUN_00521984(queue->output,
        &queue->descriptors.items[queue->descriptors.readIndex]) == 0) {
        return 0;
    }
    u32 index = queue->descriptors.readIndex;
    u32 end = index + 1;
    u32 bytes = queue->descriptors.items[index].payload->size;
    u32 position = queue->readPosition + bytes;
    if (position >= queue->capacity) {
        position -= queue->capacity;
    }
    queue->queuedBytes -= bytes;
    queue->readPosition = position;
    TransferDescriptorRing *descriptors = &queue->descriptors;
    u32 capacity = descriptors->capacity;
    if (end > capacity) {
        FUN_00521d14(descriptors, index, capacity);
        end -= capacity;
        index = 0;
    }
    FUN_00521d14(descriptors, index, end);
    index = descriptors->readIndex + 1;
    if (index >= descriptors->capacity) {
        index -= descriptors->capacity;
    }
    descriptors->readIndex = index;
    --descriptors->pending;
    return 1;
}
