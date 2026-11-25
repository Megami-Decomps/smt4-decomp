/* NON_MATCHING: the mode tests, the table walk and the failure exits match; retail stores the three table pointers by stepping one register (base, +0x2100, +0x2100) where this build computes the third from the base first, and puts the 1024 stride default in r0 instead of r1. */
#include "mobiclip_ctrl/VxDecoder.h"
#include "mobiclip/MobiclipAllocator.h"
#include "runtime/String.h"

extern "C" {
extern const u8 DAT_0040bc5c[3][0x2100];

// Allocate a VX decoder and its YUV frame buffers for the supported output mode.
u32 FUN_001ae420(VxDecoder *decoder, u32 width, u32 height, u32 bufferCount,
                  u32 format, u32 mode)
{
    if (mode == 0) {
        return 0;
    }
    if (mode == 1) {
        if (width > 1024 || format != 0) {
            return 0;
        }
        rt_memclr(decoder, sizeof(*decoder));
        decoder->state = static_cast<VxDecoderState *>(callGlobalHook(sizeof(VxDecoderState)));
        if (decoder->state == NULL) {
            return 0;
        }
        VxDecoderState *state = decoder->state;
        state->decodedFrames = 0;
        const u8 *table = DAT_0040bc5c[0];
        for (s32 i = 0; i < 3; i++) {
            state->tables[i] = table;
            table += sizeof(DAT_0040bc5c[0]);
        }
        state->width = width;
        state->height = height;
        decoder->stride = 1024;
        if (width <= 512) {
            decoder->stride = 512;
        }
        if (width <= 256) {
            decoder->stride = 256;
        }
        decoder->bufferCount = bufferCount;
        decoder->mode = mode;
        decoder->format = format;
        decoder->buffers = static_cast<void **>(callGlobalHook(bufferCount * sizeof(void *)));
        if (decoder->buffers == NULL) {
            return 0;
        }
        {
            u32 bytes = decoder->stride * (height + (height >> 1) + 1);
            for (u32 index = 0; index < bufferCount; ++index) {
                void *buffer = callGlobalHook(bytes);
                decoder->buffers[index] = buffer;
                if (buffer == NULL) {
                    return 0;
                }
            }
        }
        decoder->currentBuffer = bufferCount - 1;
        return 1;
    }
    return 0;
}
}
