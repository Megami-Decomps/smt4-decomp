#include "common.h"

extern "C" {

typedef struct Ring {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 *start;       /* start of the buffer */
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ u8 *readPos;
    /* 0x14 */ u32 available;   /* bytes left to read */
} Ring;

typedef struct Reader {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u8 *dest;        /* output cursor */
    /* 0x10 */ u32 remaining;   /* output space left */
    /* 0x14 */ u32 total;       /* bytes written so far */
    /* 0x18 */ u32 unk18;
    /* 0x1C */ Ring *ring;
} Reader;

void *rt_memcpy(void *dst, const void *src, u32 size);

/* Copies as many bytes as fit (min of the reader's remaining space and the ring's available data) out of the ring buffer, advancing both. */
void ringBufferRead(Reader *reader)
{
    u32 count = reader->ring->available;

    if (reader->remaining < count) {
        count = reader->remaining;
    }
    if (count != 0) {
        rt_memcpy(reader->dest, reader->ring->readPos, count);
        reader->dest += count;
        reader->ring->readPos += count;
        reader->total += count;
        reader->remaining -= count;
        reader->ring->available -= count;
        if (reader->ring->available == 0) {
            reader->ring->readPos = reader->ring->start;
        }
    }
}

} /* extern "C" */
