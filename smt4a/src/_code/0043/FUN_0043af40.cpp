#include "common.h"

extern "C" {

typedef struct Queue {
    u8 unk00[4];
    s32 count;     /* 0x04 */
    u8 unk08[4];
    u8 entries[1]; /* 0x0c */
} Queue;

extern u32 FUN_0043b42c(void *entries);

/* Processes the queue's entries; an empty queue fails with result code 0xd8a0a064. */
u32 FUN_0043af40(Queue *queue)
{
    if (queue->count <= 0) {
        return 0xd8a0a064;
    }
    return FUN_0043b42c(queue->entries);
}

} /* extern "C" */
