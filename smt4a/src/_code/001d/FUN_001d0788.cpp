/* NON_MATCHING: register numbering only (retail: manager r5, lock r6, node r4, priority r7). */
#include "common.h"
#include "shard/S3JobQueue.h"

extern "C" {

void nn_os_CriticalSection_Enter(void *cs);
void nn_os_CriticalSection_Leave(void *cs);
void nn_os_LightEvent_ClearSignal(void *event);
void nw_ut_internal_LinkListImpl_insert(JobList *list, JobLink *pos, JobLink *link);
void nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryEnqueue(void *queue, u32 value);

/* Appends the job node to the pending list of its priority, marks it pending and wakes the worker. */
void FUN_001d0788(JobManager *manager, JobNode *node, s32 priority)
{
    void *lock = manager->lock;

    nn_os_CriticalSection_Enter(lock);
    nn_os_LightEvent_ClearSignal(node->event);
    node->pending = 1;
    nw_ut_internal_LinkListImpl_insert(&manager->lists[priority], &manager->lists[priority].root, &node->link);
    nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryEnqueue(manager->wakeQueue, 0);
    nn_os_CriticalSection_Leave(lock);
}

} /* extern "C" */
