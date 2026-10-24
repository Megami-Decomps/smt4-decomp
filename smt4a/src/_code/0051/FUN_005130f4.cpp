/* NON_MATCHING: format/output and loop scratch registers differ; capacity reset is scheduled later. */
#include "common.h"
#include <stddef.h>

struct AudioDecoderChannelSetupView {
    u8 unk000[0x1cc];
    s32 sampleStride; /* 0x1cc */
};
struct AudioDecoderSetupView {
    AudioDecoderChannelSetupView *channels;
    s16 *buffer;
    s32 capacity;
    s32 byteCount;
    u32 format;
    s32 channelCount;
};
struct AudioDecoderAllocationHooks {
    void *(*allocate)(u32);
    void (*release)(void *);
};
typedef char AudioDecoderSetupLayout[sizeof(AudioDecoderChannelSetupView) == 0x1d0 &&
    sizeof(AudioDecoderSetupView) == 0x18 ? 1 : -1];

extern "C" {
extern AudioDecoderAllocationHooks DAT_00589510;
void sysMemClear(void *, u32);

/* Allocate one cleared decoder state per channel and set the interleaved sample stride. */
u32 FUN_005130f4(AudioDecoderSetupView **output, u32 format, s32 channelCount)
{
    if (DAT_00589510.allocate == NULL || DAT_00589510.release == NULL)
        return 0;
    AudioDecoderSetupView *decoder = static_cast<AudioDecoderSetupView *>(DAT_00589510.allocate(sizeof(AudioDecoderSetupView)));
    if (decoder == NULL)
        return 0;
    u32 stateSize = channelCount * sizeof(AudioDecoderChannelSetupView);
    decoder->channels = static_cast<AudioDecoderChannelSetupView *>(DAT_00589510.allocate(stateSize));
    if (decoder->channels == NULL) {
        DAT_00589510.release(decoder);
        return 0;
    }
    sysMemClear(decoder->channels, stateSize);
    for (s32 i = 0; i < channelCount; ++i)
        decoder->channels[i].sampleStride = channelCount * sizeof(s16);
    decoder->buffer = NULL;
    decoder->capacity = 0;
    decoder->channelCount = channelCount;
    decoder->format = format;
    decoder->byteCount = 0;
    *output = decoder;
    return 1;
}
}
