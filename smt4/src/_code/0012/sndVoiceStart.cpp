#include "nn/svc.h"
#include "sound/VoicePool.h"

extern "C" {

extern SoundVoicePool DAT_0044d0f8;
extern u8 DAT_004c40f8;

void nn_os_CriticalSection_Enter(void *section);
void nn_os_CriticalSection_Leave(void *section);
void nn_snd_CTR_Voice_SetMixParam(u32 voice, const void *mixParam);
void nn_snd_CTR_Voice_SetSampleRate(u32 voice, s32 sampleRate);
void nn_snd_CTR_Voice_SetPitch(u32 voice, f32 pitch);
void nn_snd_CTR_Voice_SetState(u32 voice, s32 state);
void FUN_0014732c(u32 voice, u32 value);
void FUN_0014734c(u32 voice, s32 value);
void FUN_00147370(u32 voice, f32 value);

/* Stores the system tick a voice was started at through its address. */
static __inline void voiceStoreStartTick(s64 tick, s64 *startTick)
{
    *startTick = tick;
}

// Starts voice `index` with its stored settings and stamps the start time (under the sound lock).
void sndVoiceStart(s32 index)
{
    if (index < 0) {
        return;
    }
    u32 count = DAT_0044d0f8.count;
    if ((u32)index < count) {
        nn_os_CriticalSection_Enter(&DAT_004c40f8);
        SoundVoicePoolEntry *entry = &DAT_0044d0f8.entries[index];
        voiceStoreStartTick(svcGetSystemTick(), &entry->startTick);
        FUN_0014732c(entry->voice, entry->second);
        FUN_0014734c(entry->voice, 1);
        nn_snd_CTR_Voice_SetMixParam(entry->voice, &entry->volume);
        nn_snd_CTR_Voice_SetSampleRate(entry->voice, entry->first);
        nn_snd_CTR_Voice_SetPitch(entry->voice, 1.0f);
        FUN_00147370(entry->voice, 1.5f);
        nn_snd_CTR_Voice_SetState(entry->voice, 0);
        nn_os_CriticalSection_Leave(&DAT_004c40f8);
    }
}

}
