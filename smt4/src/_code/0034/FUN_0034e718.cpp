/* NON_MATCHING: armcc removes the initial running-byte reload and uses different queue/stream registers and loop scheduling from retail. */
#include "shard/W6_W6Match7_WaveBuffer.h"
#include <stddef.h>

struct AudioStreamSlot {
    u32 voice; // 0x00
    WaveBuffer *buffers; // 0x04
    u8 unk08[0x30];
    u32 capacity; // 0x38
    u32 unk3c;
    s32 channels; // 0x40
    u32 writeIndex; // 0x44
    u32 readIndex; // 0x48
    u32 queued; // 0x4c
    u32 pending; // 0x50
    u32 unk54;
    u64 submittedSamples; // 0x58
    s64 consumedSamples; // 0x60
    u8 unk68[8];
};
struct AudioStreamWorker {
    u8 running; // 0x00
    u8 unk01[7];
    AudioStreamSlot *streams; // 0x08
    u8 unk0c[8];
    u32 streamCount; // 0x14
    u32 written; // 0x18
    u32 read; // 0x1c
};
struct AudioStreamRequest {
    AudioStreamSlot *stream;
    u8 *data;
    u32 bytes;
};
typedef char CheckStreamSlotSize[sizeof(AudioStreamSlot) == 0x70 ? 1 : -1];
typedef char CheckWaveBufferSize[sizeof(WaveBuffer) == 0x18 ? 1 : -1];
typedef char CheckWaveBufferStatus[offsetof(WaveBuffer, playback.status) == 0x11 ? 1 : -1];

extern "C" {
extern AudioStreamWorker DAT_0044d0f8;
extern AudioStreamRequest DAT_004c4104[64];
extern u8 DAT_004c40f8[];
void nn_os_CriticalSection_Enter(void *lock);
void nn_os_CriticalSection_Leave(void *lock);
void FUN_002a208c();
void nn_snd_CTR_InitializeWaveBuffer(WaveBuffer *buffer);
u32 FUN_00360060(u32 bytes, s32 format, s32 channels);
void FUN_001565e4(u32 voice, WaveBuffer *buffer);
void FUN_00159fd8();
void threadSleepDuration(s64 duration);
}

// Reclaim finished wave buffers and submit queued PCM data under the stream lock.
extern "C" void FUN_0034e718()
{
    DAT_0044d0f8.running = 1;
    while (DAT_0044d0f8.running) {
        nn_os_CriticalSection_Enter(DAT_004c40f8);
        FUN_002a208c();
        u32 count = DAT_0044d0f8.streamCount;
        AudioStreamSlot *streams = DAT_0044d0f8.streams;
        for (u32 i = 0; i < count; ++i) {
            AudioStreamSlot *stream = &streams[i];
            if (stream->voice && stream->queued && stream->buffers[stream->readIndex].playback.status == 3) {
                stream->consumedSamples += static_cast<s32>(stream->buffers[stream->readIndex].sampleCount);
                --stream->queued;
                ++stream->readIndex;
                if (stream->readIndex == stream->capacity)
                    stream->readIndex = 0;
            }
        }
        while (DAT_0044d0f8.read < DAT_0044d0f8.written) {
            AudioStreamSlot *stream = DAT_004c4104[DAT_0044d0f8.read & 63].stream;
            if (stream) {
                if (stream->queued >= stream->capacity)
                    break;
                u8 *data = DAT_004c4104[DAT_0044d0f8.read & 63].data;
                u32 bytes = DAT_004c4104[DAT_0044d0f8.read & 63].bytes;
                nn_snd_CTR_InitializeWaveBuffer(&stream->buffers[stream->writeIndex]);
                stream->buffers[stream->writeIndex].data = data;
                u32 samples = FUN_00360060(bytes, 1, stream->channels);
                stream->submittedSamples += samples;
                stream->buffers[stream->writeIndex].sampleCount = samples;
                stream->buffers[stream->writeIndex].looping = 0;
                FUN_001565e4(stream->voice, &stream->buffers[stream->writeIndex]);
                ++stream->queued;
                ++stream->writeIndex;
                if (stream->writeIndex == stream->capacity)
                    stream->writeIndex = 0;
                --stream->pending;
            }
            ++DAT_0044d0f8.read;
        }
        FUN_00159fd8();
        nn_os_CriticalSection_Leave(DAT_004c40f8);
        threadSleepDuration(500000);
    }
}
