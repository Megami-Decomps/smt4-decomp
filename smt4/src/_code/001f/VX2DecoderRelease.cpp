#include "common.h"

extern "C" {

int mobiclipAllocatorFree(u32 buffer);

typedef struct VX2Decoder {
    /* 0x0 */ u32 buffer;
    /* 0x4 */ u32 *planes;
    /* 0x8 */ u32 planeCount;
} VX2Decoder;

void VX2DecoderRelease(VX2Decoder *decoder)
{
    u32 i;

    mobiclipAllocatorFree(decoder->buffer);
    if (decoder->planes != NULL) {
        for (i = 0; i < decoder->planeCount; i++) {
            mobiclipAllocatorFree(decoder->planes[i]);
        }
        mobiclipAllocatorFree((u32)decoder->planes);
        return;
    }
}

} /* extern "C" */
