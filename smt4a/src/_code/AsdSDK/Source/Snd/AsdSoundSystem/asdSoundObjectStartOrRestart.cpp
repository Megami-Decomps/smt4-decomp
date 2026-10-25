/* NON_MATCHING: sound/voice/lock registers differ and typed per-channel buffers enable strength reduction; -O2 candidate. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "shard/W6_W6Match1_CriticalSection.h"
#include "shard/FUN_001af874.h"

extern "C" {
extern CriticalSection DAT_0063f4f0;
void FUN_001b6390(u32, f32);
void nn_snd_CTR_Voice_SetState(u32, u32);
void nn_snd_CTR_FreeVoice(u32);
void nn_snd_CTR_Voice_SetMixParam(u32, const void *);
void nn_snd_CTR_Voice_SetPitch(u32, f32);
void nn_snd_CTR_InitializeWaveBuffer(void *);
void soundQueueArchiveWaveBuffers(u32, u32, void *, void *, u32);

void asdSoundObjectStartOrRestart(AsdSndObject *sound, s32 frames, f32 volume, f32 scale)
{
    if (sound == NULL)
        return;
    if (sound->stream.active) {
        if (!(sound->flags & 0x202)) {
            ScopedCriticalLock lock(DAT_0063f4f0);
            sound->fadeFrames = frames;
            sound->volume = volume;
            sound->fadeElapsed = 0;
            for (s32 i = 0; i < sound->voiceCount; ++i) {
                FUN_001b6390(sound->voices[i], sound->fadeFrames > 0 ? 0.0f : sound->volume);
                nn_snd_CTR_Voice_SetState(sound->voices[i], 0);
            }
            sound->flags |= 0x40;
            if (sound->fadeFrames > 0)
                sound->flags |= 0x20;
        } else if (sound->flags & 0x200) {
            ScopedCriticalLock lock(DAT_0063f4f0);
            for (s32 i = 0; i < sound->voiceCount; ++i) {
                nn_snd_CTR_FreeVoice(sound->voices[i]);
                u32 voice = FUN_001af874(0x7fff, 0, 0);
                sound->voices[i] = voice;
                nn_snd_CTR_Voice_SetMixParam(voice, sound->playback.mix[i]);
                nn_snd_CTR_Voice_SetPitch(sound->voices[i], 1.0f);
                sound->flags = 0;
                for (s32 buffer = 0; buffer < 2; ++buffer)
                    nn_snd_CTR_InitializeWaveBuffer(sound->stream.waveBuffers[i][buffer]);
                soundQueueArchiveWaveBuffers(sound->voices[i], sound->playback.sampleParameters[i],
                             sound->stream.waveBuffers[i][0], sound->stream.waveBuffers[i][1], i != 0);
            }
            asdSoundObjectStartOrRestart(sound, frames, sound->volume, scale);
        }
    }
}
}
