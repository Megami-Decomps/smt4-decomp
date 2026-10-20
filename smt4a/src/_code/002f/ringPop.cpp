#include "common.h"

extern "C" {

typedef struct {
    u8 unk00[0x14];  /* 0x00 */
    u32 head;        /* 0x14 */
    s32 count;       /* 0x18 */
    u32 capacity;    /* 0x1c */
} RingBuffer;

/* Drops the oldest entry: the head advances one slot, wrapping at the capacity. */
void ringPop(RingBuffer *ring)
{
    u32 next = (ring->head + 1) % ring->capacity;

    ring->count--;
    ring->head = next;
}

} /* extern "C" */
