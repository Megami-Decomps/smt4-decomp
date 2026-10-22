/* NON_MATCHING: audio decoder growth and interleaved output traversal use different pointer registers. */
/* Expands compressed frames into an interleaved sample buffer, growing it when needed. */
#include "common.h"

struct AudioDecoderChannel {
    const u8 *input;
    s16 *output;
    u8 unk008[0x1C8];
};
struct AudioFrameDecoder {
    AudioDecoderChannel *channels;
    s16 *buffer;
    s32 capacity;
    s32 byteCount;
    u32 unk10;
    s32 channelCount;
};
struct AudioAllocationHooks {
    void *(*allocate)(u32 size);
    void (*release)(void *memory);
};

extern "C" {
extern AudioAllocationHooks DAT_00589510;
void FUN_001df7a8(AudioDecoderChannel *channel);

u32 FUN_005132e4(AudioFrameDecoder *decoder, const u8 *input, s32 inputSize)
{
    s32 required = inputSize / 0x28 * 0x200;
    decoder->byteCount = required;
    if (required > decoder->capacity) {
        decoder->capacity = required;
        if (decoder->buffer != NULL) {
            DAT_00589510.release(decoder->buffer);
        }
        decoder->buffer = (s16 *)DAT_00589510.allocate(decoder->capacity);
        if (decoder->buffer == NULL) {
            return 0;
        }
    }
    s16 *output = decoder->buffer;
    s32 frameCount = (decoder->byteCount >> decoder->channelCount) / 0x100;
    for (s32 frame = 0; frame < frameCount; ++frame) {
        for (s32 channel = 0; channel < decoder->channelCount; ++channel) {
            decoder->channels[channel].input = input;
            decoder->channels[channel].output = output + channel;
            FUN_001df7a8(&decoder->channels[channel]);
            input += 0x28;
        }
        output += decoder->channelCount * 0x100;
    }
    return 1;
}
}
