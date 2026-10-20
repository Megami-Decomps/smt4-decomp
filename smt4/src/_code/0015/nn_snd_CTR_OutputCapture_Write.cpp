#include "common.h"

extern "C" {

int rt_memcpy(void *dst, s16 *src, int size);

typedef struct OutputCapture {
    /* 0x0 */ u8 *buffer;
    /* 0x4 */ s32 capacity;   /* in stereo frames of 4 bytes */
    /* 0x8 */ u8 unk8[4];
    /* 0xC */ s32 position;
} OutputCapture;

/* Appends `count` frames to the ring buffer, wrapping the write position at capacity. */
void nn_snd_CTR_OutputCapture_Write(OutputCapture *capture, s16 *frames, s32 count)
{
    s32 position;

    rt_memcpy(capture->buffer + capture->position * 4, frames, count << 2);
    position = capture->position;
    capture->position = position + count;
    if (position + count >= capture->capacity) {
        capture->position = 0;
    }
}

} /* extern "C" */
