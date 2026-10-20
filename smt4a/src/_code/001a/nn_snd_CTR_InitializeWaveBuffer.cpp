#include "common.h"

extern "C" {

typedef struct WaveBuffer {
    /* 0x00 */ u32 a;
    /* 0x04 */ u32 b;
    /* 0x08 */ u32 c;
    /* 0x0C */ u32 d;
    /* 0x10 */ union {
        u32 word;
        u8 bytes[4];
    } e;
    /* 0x14 */ u32 f;
} WaveBuffer;

/* Clears the wave buffer (the retail code clears the byte at 0x11 once more after the words). */
void nn_snd_CTR_InitializeWaveBuffer(WaveBuffer *buffer)
{
    buffer->a = 0;
    buffer->b = 0;
    buffer->c = 0;
    buffer->d = 0;
    buffer->e.word = 0;
    buffer->f = 0;
    buffer->e.bytes[1] = 0;
}

} /* extern "C" */
