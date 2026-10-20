/* NON_MATCHING: instruction scheduling and register choice only (retail loads head/count in a different order and returns directly from the first branch instead of branching to the shared epilogue) */
#include "common.h"

extern "C" {

typedef struct ByteRing002fbfe8 {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 *data;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ u32 head;        /* next byte to write */
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 count;       /* bytes stored */
    /* 0x1c */ u32 capacity;
} ByteRing002fbfe8;

void rt_memcpy(void *dst, const void *src, u32 size);

/* Appends size bytes at the ring's head, wrapping to the start when the end of the buffer is reached. */
void byteRingWrite(ByteRing002fbfe8 *ring, const u8 *src, u32 size)
{
    u32 room = ring->capacity - ring->head;
    u8 *dst = ring->data + ring->head;
    u32 rest;

    if (room > size) {
        rt_memcpy(dst, src, size);
        ring->head = ring->head + size;
        ring->count = ring->count + size;
        return;
    } else {
        rt_memcpy(dst, src, room);
        ring->count = ring->count + room;
        ring->head = (ring->head + room) % ring->capacity;
        rest = size - room;
        if (rest != 0) {
            rt_memcpy(ring->data, src + room, rest);
            ring->head = rest;
            ring->count = ring->count + rest;
        }
    }
}

} /* extern "C" */
