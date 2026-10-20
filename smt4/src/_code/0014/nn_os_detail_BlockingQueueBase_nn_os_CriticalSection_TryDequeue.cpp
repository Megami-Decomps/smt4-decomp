/* NON_MATCHING: the critical-section pointer and the `out` pointer swap callee-saved registers (r5/r6). */
#include "common.h"

extern "C" {

/* nn::os::detail::BlockingQueueBase<nn::os::CriticalSection>: a ring buffer guarded by a critical section. */
typedef struct {
    u32 *buffer;        /* 0x00 */
    u8 unk04[8];
    u8 notFull[8];      /* 0x0c: wait queue signalled when a slot frees up */
    u8 lock[12];        /* 0x14 */
    u32 capacity;       /* 0x20 */
    u32 head;           /* 0x24 */
    s32 count;          /* 0x28 */
    u8 unk2c[4];
    s32 waitingProducers; /* 0x30 */
} BlockingQueue;

void nn_os_CriticalSection_Enter(void *lock);
void nn_os_CriticalSection_Leave(void *lock);
int FUN_002a42e8(void *queue, int count);

/* Pops the oldest element into *out; returns 0 when the queue is empty. */
u32 nn_os_detail_BlockingQueueBase_nn_os_CriticalSection_TryDequeue(BlockingQueue *queue, u32 *out)
{
    void *lock = queue->lock;

    nn_os_CriticalSection_Enter(lock);
    if (queue->count > 0) {
        *out = queue->buffer[queue->head];
        queue->head = (u32)((queue->head + 1) % (queue->capacity));
        queue->count--;
        if (queue->waitingProducers > 0) {
            FUN_002a42e8(queue->notFull, 1);
        }
        nn_os_CriticalSection_Leave(lock);
        return 1;
    }
    nn_os_CriticalSection_Leave(lock);
    return 0;
}

} /* extern "C" */
