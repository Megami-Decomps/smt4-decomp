#include "common.h"

extern "C" {

void inlineBufferFree(void *object);

typedef struct SmallBuffer {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 *begin;
    /* 0x08 */ u32 capacity;
    /* 0x0C */ u8 *end;
    /* 0x10 */ u16 inlineData[1];
} SmallBuffer;

/* Resets the buffer to its inline storage at 0x10 (capacity 0x100, empty). */
void inlineBufferReset(SmallBuffer *buffer)
{
    u8 *inlineData;

    inlineBufferFree(buffer);
    inlineData = (u8 *)&buffer->inlineData[0];
    buffer->end = inlineData;
    buffer->capacity = 0x100;
    buffer->begin = inlineData;
    buffer->inlineData[0] = 0;
}

} /* extern "C" */
