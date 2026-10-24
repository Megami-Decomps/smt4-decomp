#include "nn/svc.h"
#include "sound/VoicePool.h"

extern "C" {

extern SoundVoicePool DAT_005880d0;
extern u8 DAT_00618518;

void nn_os_CriticalSection_Enter(void *section);
void nn_os_CriticalSection_Leave(void *section);
void nn_snd_CTR_Voice_SetMixParam(u32 voice, const void *mixParam);
void nn_snd_CTR_Voice_SetSampleRate(u32 voice, s32 sampleRate);
void nn_snd_CTR_Voice_SetPitch(u32 voice, f32 pitch);
void nn_snd_CTR_Voice_SetState(u32 voice, s32 state);
void FUN_0018a8a8(u32 voice, u32 value);
void FUN_0018a8c8(u32 voice, s32 value);
void FUN_001b6390(u32 voice, f32 value);

// Starts voice `index` with its stored settings and stamps the start time (under the sound lock).
void sndVoiceStart(s32 index)
{
    if (index < 0) {
        return;
    }
    u32 count = DAT_005880d0.count;
    if ((u32)index < count) {
        nn_os_CriticalSection_Enter(&DAT_00618518);
        SoundVoicePoolEntry *entry = &DAT_005880d0.entries[index];
        entry->startTick = svcGetSystemTick();
        FUN_0018a8a8(entry->voice, entry->second);
        FUN_0018a8c8(entry->voice, 1);
        nn_snd_CTR_Voice_SetMixParam(entry->voice, &entry->volume);
        nn_snd_CTR_Voice_SetSampleRate(entry->voice, entry->first);
        nn_snd_CTR_Voice_SetPitch(entry->voice, 1.0f);
        FUN_001b6390(entry->voice, 1.0f);
        nn_snd_CTR_Voice_SetState(entry->voice, 0);
        nn_os_CriticalSection_Leave(&DAT_00618518);
    }
}

}
