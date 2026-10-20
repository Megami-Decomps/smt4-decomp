#include "common.h"

extern "C" {

typedef struct WaveBuffer {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;   /* byte 0x11 is a separate flag */
    /* 0x14 */ u32 unk14;
} WaveBuffer;

void nn_snd_CTR_InitializeWaveBuffer(WaveBuffer *buffer)
{
    buffer->unk00 = 0;
    buffer->unk04 = 0;
    buffer->unk08 = 0;
    buffer->unk0C = 0;
    buffer->unk10 = 0;
    buffer->unk14 = 0;
    ((u8 *)buffer)[0x11] = 0;
}

} /* extern "C" */
