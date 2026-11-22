/* NON_MATCHING: with the worker's shared cursors volatile (see the struct fields) the reloads, ldrd/strd counters and loop tests match retail; remaining: constant-register numbering (retail sl=4, r9=16 loaded lazily), the submitted-sample strd address form and the wave-buffer store scheduling. */
#include "sound/AudioStreamWorker.h"
#include <stddef.h>

extern "C" {
extern AudioStreamWorker g_soundVoicePool;
extern AudioStreamRequest DAT_004c4104[64];
extern u8 DAT_004c40f8[];
void nn_os_CriticalSection_Enter(void *lock);
void nn_os_CriticalSection_Leave(void *lock);
void FUN_002a208c();
void nn_snd_CTR_InitializeWaveBuffer(WaveBuffer *buffer);
u32 FUN_00360060(u32 bytes, s32 format, s32 channels);
void nn_snd_CTR_Voice_AppendWaveBuffer(u32 voice, WaveBuffer *buffer);
void FUN_00159fd8();
void threadSleepDuration(s64 duration);
}

// Reclaim finished wave buffers and submit queued PCM data under the stream lock.
extern "C" void FUN_0034e718()
{
    g_soundVoicePool.running = 1;
    while (g_soundVoicePool.running) {
        nn_os_CriticalSection_Enter(DAT_004c40f8);
        FUN_002a208c();
        u32 count = g_soundVoicePool.streamCount;
        for (u32 i = 0; i < count; ++i) {
            AudioStreamSlot *stream = &g_soundVoicePool.streams[i];
            if (stream->voice && stream->queued && stream->buffers[stream->readIndex].playback.status == 3) {
                stream->consumedSamples += static_cast<s32>(stream->buffers[stream->readIndex].sampleCount);
                --stream->queued;
                ++stream->readIndex;
                if (stream->readIndex == stream->capacity)
                    stream->readIndex = 0;
            }
        }
        while (g_soundVoicePool.written > g_soundVoicePool.read) {
            AudioStreamSlot *stream = DAT_004c4104[g_soundVoicePool.read & 63].stream;
            if (stream) {
                if (stream->queued >= stream->capacity)
                    break;
                u8 *data = DAT_004c4104[g_soundVoicePool.read & 63].data;
                u32 bytes = DAT_004c4104[g_soundVoicePool.read & 63].bytes;
                nn_snd_CTR_InitializeWaveBuffer(&stream->buffers[stream->writeIndex]);
                stream->buffers[stream->writeIndex].data = data;
                u32 samples = FUN_00360060(bytes, 1, stream->channels);
                stream->submittedSamples = stream->submittedSamples + samples;
                stream->buffers[stream->writeIndex].looping = 0;
                stream->buffers[stream->writeIndex].sampleCount = samples;
                nn_snd_CTR_Voice_AppendWaveBuffer(stream->voice, &stream->buffers[stream->writeIndex]);
                ++stream->queued;
                ++stream->writeIndex;
                if (stream->writeIndex == stream->capacity)
                    stream->writeIndex = 0;
                --stream->pending;
            }
            ++g_soundVoicePool.read;
        }
        FUN_00159fd8();
        nn_os_CriticalSection_Leave(DAT_004c40f8);
        threadSleepDuration(500000);
    }
}
