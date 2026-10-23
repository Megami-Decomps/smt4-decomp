/* NON_MATCHING: allocator callback-base caching, context stack placement and stereo interleave-loop unrolling differ from retail. */
#include "common.h"
#include <stddef.h>

struct MovieAdpcmContext { u32 storage[2]; };
struct MovieAdpcmDecoder {
    s16 *output;
    u32 outputCapacity;
    u32 outputBytes;
    s16 *channelBuffer;
    u32 channelCapacity;
    u32 unk14;
    u32 channels;
};
struct MovieAdpcmAllocator {
    void *(*allocate)(u32 bytes);
    void (*release)(void *memory);
};
typedef char MovieAdpcmDecoderLayout[
    offsetof(MovieAdpcmDecoder, channels) == 0x18 && sizeof(MovieAdpcmContext) == 8 ? 1 : -1];

extern "C" {
extern MovieAdpcmAllocator DAT_00589508;
u32 FUN_00439e0c(u32 bytes, s32 encoding, s32 channels);
void FUN_001d1438(MovieAdpcmContext *destination, const void *source);
void nn_snd_CTR_DecodeAdpcmData(const u8 *source, s16 *destination, const void *coefficients, MovieAdpcmContext *context, u32 samples);

u32 FUN_00512f1c(MovieAdpcmDecoder *decoder, const u8 *data, u32 bytes)
{
    u32 channels = decoder->channels;
    decoder->outputBytes = 0;
    u32 channelBytes = bytes / channels;
    u32 samples = FUN_00439e0c(channelBytes - 38, 2, 1);
    if (!samples)
        return 1;
    if (channels > 1 && samples > decoder->channelCapacity) {
        if (decoder->channelBuffer)
            DAT_00589508.release(decoder->channelBuffer);
        decoder->channelCapacity = 0;
        decoder->channelBuffer = (s16 *)DAT_00589508.allocate(samples * sizeof(s16));
        if (!decoder->channelBuffer)
            return 0;
        decoder->channelCapacity = samples;
    }
    u32 outputBytes = (samples - 32) * channels * sizeof(s16);
    u32 requiredBytes = channels == 1 ? samples * sizeof(s16) : outputBytes;
    if (decoder->outputCapacity < requiredBytes) {
        if (decoder->output)
            DAT_00589508.release(decoder->output);
        decoder->outputCapacity = 0;
        decoder->output = (s16 *)DAT_00589508.allocate(requiredBytes);
        if (!decoder->output)
            return 0;
        decoder->outputCapacity = requiredBytes;
    }
    decoder->outputBytes = outputBytes;
    MovieAdpcmContext context;
    if (channels == 1) {
        FUN_001d1438(&context, data + 32);
        nn_snd_CTR_DecodeAdpcmData(data + 38, decoder->output, data, &context, samples);
    } else {
        for (u32 channel = 0; channel < channels; ++channel, data += channelBytes) {
            FUN_001d1438(&context, data + 32);
            nn_snd_CTR_DecodeAdpcmData(data + 38, decoder->channelBuffer, data, &context, samples);
            const s16 *source = decoder->channelBuffer + 16;
            s16 *destination = decoder->output + channel;
            for (s32 index = 0; index < (s32)(samples - 32); ++index) {
                *destination = *source++;
                destination += channels;
            }
        }
    }
    return 1;
}
}
