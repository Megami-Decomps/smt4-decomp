/* NON_MATCHING: with the worker's shared cursors volatile (see the struct fields) the reloads, ldrd/strd counters and loop tests match retail; remaining: constant-register numbering (retail sl=4, r9=16 loaded lazily), the submitted-sample strd address form and the wave-buffer store scheduling. */
#include "sound/AudioStreamWorker.h"
#include <stddef.h>

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
        while (DAT_0044d0f8.written > DAT_0044d0f8.read) {
            AudioStreamSlot *stream = DAT_004c4104[DAT_0044d0f8.read & 63].stream;
            if (stream) {
                if (stream->queued >= stream->capacity)
                    break;
                u8 *data = DAT_004c4104[DAT_0044d0f8.read & 63].data;
                u32 bytes = DAT_004c4104[DAT_0044d0f8.read & 63].bytes;
                nn_snd_CTR_InitializeWaveBuffer(&stream->buffers[stream->writeIndex]);
                stream->buffers[stream->writeIndex].data = data;
                u32 samples = FUN_00360060(bytes, 1, stream->channels);
                stream->submittedSamples = stream->submittedSamples + samples;
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
