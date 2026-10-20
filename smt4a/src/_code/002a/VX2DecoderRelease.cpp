#include "common.h"

extern "C" {

void mobiclipAllocatorFree(u32 handle);

typedef struct VX2Decoder {
    /* 0x00 */ u32 handle;
    /* 0x04 */ u32 *items;
    /* 0x08 */ u32 count;
} VX2Decoder;

/* Releases the decoder's handle, then each of its items and the item array. */
void VX2DecoderRelease(VX2Decoder *decoder)
{
    u32 i;

    mobiclipAllocatorFree(decoder->handle);
    if (decoder->items != NULL) {
        for (i = 0; i < decoder->count; i++) {
            mobiclipAllocatorFree(decoder->items[i]);
        }
        mobiclipAllocatorFree((u32)decoder->items);
        return;
    }
}

} /* extern "C" */
