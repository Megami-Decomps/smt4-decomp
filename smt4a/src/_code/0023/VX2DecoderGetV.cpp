#include "common.h"

extern "C" {

typedef struct Plane {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 stride;
} Plane;

typedef struct VX2Decoder {
    /* 0x00 */ Plane *plane;
    /* 0x04 */ u8 unk04[0x14];
    /* 0x18 */ s32 row;
} VX2Decoder;

/* Returns the offset of sample `column`: row * stride + column + (row >> 1). */
s32 VX2DecoderGetV(VX2Decoder *decoder, s32 column)
{
    return decoder->row * decoder->plane->stride + column + ((u32)decoder->row >> 1);
}

} /* extern "C" */
