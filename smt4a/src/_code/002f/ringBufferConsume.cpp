/* Advances the ring buffer's read position by `count` (wrapping at its capacity) and reduces the stored length. */
#include "common.h"

extern "C" {

typedef struct RingBuffer {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 pos;
    /* 0x18 */ s32 length;
    /* 0x1C */ u32 capacity;
} RingBuffer;

void ringBufferConsume(RingBuffer *ring, s32 count)
{
    ring->pos = (u32)((ring->pos + count) % (ring->capacity));
    ring->length -= count;
}

}
