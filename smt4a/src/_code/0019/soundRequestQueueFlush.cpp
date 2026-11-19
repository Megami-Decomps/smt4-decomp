/* NON_MATCHING: compiler places the empty-batch allocation before the common publish block; retail puts it on an out-of-line branch (as smt4 soundRequestQueueFlush). */
#include "classes/ObjectCommandRequests.h"
#include "nn/svc.h"

extern "C" {
void FUN_001aa228(ObjectCommandQueue *queue, ObjectCommand *head);
u32 nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryEnqueue(ObjectCommandQueue *queue, ObjectCommand *head);

// Publish a batch of sound commands; a blocking flush also publishes an empty batch.
u32 soundRequestQueueFlush(ObjectCommandQueue *queue, s32 blocking)
{
    if (queue->head == NULL) {
        if (blocking == 0)
            return 0;
        ObjectCommand *command = objectCommandBegin(queue, 4);
        command->kind = 0;
        if (queue->tail == NULL)
            queue->head = command;
        else
            queue->tail->next = command;
        queue->tail = command;
        command->next = NULL;
    }
    ObjectCommand *head = queue->head;
    u32 sequence = queue->nextSequence;
    nn::os::DataMemoryBarrier();
    if (blocking != 0) {
        FUN_001aa228(queue, head);
    } else {
        if (nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryEnqueue(queue, head) == 0)
            return 0;
    }
    queue->head->sequence = sequence;
    queue->nextSequence++;
    queue->head = NULL;
    queue->tail = NULL;
    return sequence;
}
} /* extern "C" */
