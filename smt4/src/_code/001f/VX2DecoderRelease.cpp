#include "common.h"

extern "C" {

int FUN_002580c4(u32 buffer);

typedef struct VX2Decoder {
    /* 0x0 */ u32 buffer;
    /* 0x4 */ u32 *planes;
    /* 0x8 */ u32 planeCount;
} VX2Decoder;

void VX2DecoderRelease(VX2Decoder *decoder)
{
    u32 i;

    FUN_002580c4(decoder->buffer);
    if (decoder->planes != NULL) {
        for (i = 0; i < decoder->planeCount; i++) {
            FUN_002580c4(decoder->planes[i]);
        }
        FUN_002580c4((u32)decoder->planes);
        return;
    }
}

} /* extern "C" */
