/* NON_MATCHING: stack-argument load merging, lookup-table base selection and state-allocation failure exit differ. */
#include "mobiclip_ctrl/VxDecoder.h"
#include "mobiclip/MobiclipAllocator.h"

extern "C" {
extern const u8 DAT_0040bc5c[3][0x2100];
void rt_memclr(void *memory, u32 bytes);

// Allocate a VX decoder and its YUV frame buffers for the supported output mode.
u32 FUN_001ae420(VxDecoder *decoder, u32 width, u32 height, u32 bufferCount,
                  u32 format, u32 mode)
{
    switch (mode) {
    case 0:
        break;
    case 1:
        if (width > 1024 || format != 0) {
            return 0;
        }
        rt_memclr(decoder, sizeof(*decoder));
        VxDecoderState *state = static_cast<VxDecoderState *>(callGlobalHook(sizeof(VxDecoderState)));
        decoder->state = state;
        if (state == NULL) {
            return 0;
        }
        state->decodedFrames = 0;
        for (s32 i = 0; i < 3; i++) {
            state->tables[i] = DAT_0040bc5c[i];
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
    default:
        break;
    }
    return 0;
}
}
