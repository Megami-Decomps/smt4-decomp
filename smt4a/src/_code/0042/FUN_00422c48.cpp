/* NON_MATCHING: 59 lines (140 vs 141 rows): with AudioStreamWorker.h volatile cursors, all reloads, vpush d8, vldr/vstr s16, and ldrd r0, [r4] match; remaining: add r2, r0, #96 before ldrd r2, [r2] and a few scratch-register swaps. */
#include "sound/AudioStreamWorker.h"

extern "C" {
extern AudioStreamWorker g_soundVoicePool;
extern AudioStreamRequest DAT_00618524[64];
extern u8 g_soundVoiceCriticalSection;

void nn_os_CriticalSection_Enter(void *section);
void nn_os_CriticalSection_Leave(void *section);
void nn_snd_CTR_InitializeWaveBuffer(WaveBuffer *buffer); // declcheck: local (only the generated protos__code.h declares it)
void FUN_001c76b8(void);
void nn_snd_CTR_Voice_AppendWaveBuffer(u32 voice, WaveBuffer *buffer);
void FUN_001cd5ac(void);
u32 FUN_00439e0c(u32 samples, s32 format, s32 channels);

/* Retires the wave buffers the voices have finished, then feeds the queued requests into the voices' free buffers. */
void FUN_00422c48(void)
{
    nn_os_CriticalSection_Enter(&g_soundVoiceCriticalSection);
    if ((s8)g_soundVoicePool.mixThreadRequested != 0) {
        FUN_001cd5ac();
    }
    u32 count = g_soundVoicePool.streamCount;
    for (u32 i = 0; i < count; ++i) {
        AudioStreamSlot *stream = &g_soundVoicePool.streams[i];
        if (stream->voice != 0 && stream->queued != 0 && stream->buffers[stream->readIndex].playback.status == 3) {
            stream->consumedSamples += (s32)stream->buffers[stream->readIndex].sampleCount;
            --stream->queued;
            ++stream->readIndex;
            if (stream->readIndex == stream->capacity) {
                stream->readIndex = 0;
            }
        }
    }
    while (g_soundVoicePool.written > g_soundVoicePool.read) {
        AudioStreamSlot *stream = DAT_00618524[g_soundVoicePool.read & 63].stream;
        if (stream != NULL) {
            if (stream->queued >= stream->capacity) {
                break;
            }
            u8 *data = DAT_00618524[g_soundVoicePool.read & 63].data;
            u32 bytes = DAT_00618524[g_soundVoicePool.read & 63].bytes;
            nn_snd_CTR_InitializeWaveBuffer(&stream->buffers[stream->writeIndex]);
            stream->buffers[stream->writeIndex].data = data;
            u32 samples = FUN_00439e0c(bytes, 1, stream->channels);
            stream->submittedSamples = stream->submittedSamples + samples;
            stream->buffers[stream->writeIndex].sampleCount = samples;
            stream->buffers[stream->writeIndex].looping = 0;
            nn_snd_CTR_Voice_AppendWaveBuffer(stream->voice, &stream->buffers[stream->writeIndex]);
            ++stream->queued;
            ++stream->writeIndex;
            if (stream->writeIndex == stream->capacity) {
                stream->writeIndex = 0;
            }
            --stream->pending;
        }
        ++g_soundVoicePool.read;
    }
    if ((s8)g_soundVoicePool.mixThreadRequested != 0) {
        FUN_001c76b8();
    }
    nn_os_CriticalSection_Leave(&g_soundVoiceCriticalSection);
}
}
