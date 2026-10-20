#include "common.h"

extern "C" {

typedef struct VX2Info {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ s32 stride;
} VX2Info;

typedef struct VX2Decoder {
    /* 0x00 */ VX2Info *info;
    /* 0x04 */ u8 unk04[0x14];
    /* 0x18 */ s32 row;
} VX2Decoder;

int VX2DecoderGetV(VX2Decoder *decoder, int offset)
{
    return decoder->row * decoder->info->stride + offset + ((u32)decoder->row >> 1);
}

} /* extern "C" */
