/* NON_MATCHING: compiler places the empty-batch allocation before the common publish block; retail puts it on an out-of-line branch. */
#include "classes/Obj421aa4.h"
#include "nn/svc.h"

extern "C" {
Obj421aa4Node *FUN_002b4f64(Obj421aa4Manager *manager, u32 kind);
void nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_Enqueue(Obj421aa4Manager *queue, Obj421aa4Node *head);
u32 nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryEnqueue(Obj421aa4Manager *queue, Obj421aa4Node *head);

// Publish a batch of sound commands; a blocking flush also publishes an empty batch.
u32 FUN_002bad74(Obj421aa4Manager *manager, s32 blocking)
{
    if (manager->pending.head == NULL) {
        if (blocking == 0)
            return 0;
        Obj421aa4Node *node = FUN_002b4f64(manager, 4);
        node->stamp = manager->unk184;
        node->type = 0;
        if (manager->pending.tail == NULL)
            manager->pending.head = node;
        else
            manager->pending.tail->next = node;
        manager->pending.tail = node;
        node->next = NULL;
    }
    Obj421aa4Node *head = manager->pending.head;
    u32 sequence = manager->pending.nextSequence;
    nn::os::DataMemoryBarrier();
    if (blocking != 0) {
        nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_Enqueue(manager, head);
    } else {
        if (nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryEnqueue(manager, head) == 0)
            return 0;
    }
    manager->pending.head->completion.sequence = sequence;
    manager->pending.nextSequence++;
    manager->pending.head = NULL;
    manager->pending.tail = NULL;
    return sequence;
}
} /* extern "C" */
