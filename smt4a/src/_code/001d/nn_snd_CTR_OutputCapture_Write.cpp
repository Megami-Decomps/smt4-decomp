#include "common.h"

extern "C" {

void rt_memcpy(u8 *dest, const s16 *source, s32 size);

typedef struct OutputCapture {
    /* 0x00 */ u8 *buffer;
    /* 0x04 */ s32 capacity;       /* in 4-byte frames */
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ s32 position;       /* write position in frames */
} OutputCapture;

/* Appends `count` stereo 16-bit frames to the ring buffer, wrapping the write position at the capacity. */
void nn_snd_CTR_OutputCapture_Write(OutputCapture *capture, const s16 *frames, s32 count)
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
