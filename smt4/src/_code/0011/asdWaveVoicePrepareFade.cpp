/* NON_MATCHING: frames and reset-path lock occupy r6/r7 instead of retail r7/r6; first saved-register setup and target-volume store selection differ. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSndStatus g_asdSoundStatus;
void nn_os_CriticalSection_Enter(void *);
void nn_os_CriticalSection_Leave(void *);
void sndVoiceFree(u32 voice);
u32 FUN_002bd29c(u32 priority, u32 flags, u32 unused);
void nn_snd_CTR_Voice_SetMixParam(u32 voice, const f32 *);
void nn_snd_CTR_Voice_SetPitch(u32 voice, f32 pitch);
void nn_snd_CTR_Voice_SetState(u32 voice, s32 state);
void nn_snd_CTR_InitializeWaveBuffer(void *);
u32 soundQueueArchiveWaveBuffers(u32 player, void *archive, void *initial, void *loop, s32 index);
void FUN_00147370(u32 voice, f32 volume);

// Reset a stopped voice when necessary, then prepare its target volume and fade.
void asdWaveVoicePrepareFade(AsdSndWaveVoice *sound, s32 frames, f32 volume, f32 secondaryVolume)
{
    if (sound == NULL)
        return;
    AsdSndStatus *status = &g_asdSoundStatus;
    if (!(sound->unk90 & 0x202)) {
        void *lock = status->unk08;
        nn_os_CriticalSection_Enter(lock);
        sound->fadeFrames = frames;
        sound->unk84 = 0;
        sound->targetVolume = volume;
        f32 startVolume = volume;
        if (frames > 0)
            startVolume = 0.0f;
        FUN_00147370(sound->voice, startVolume);
        nn_snd_CTR_Voice_SetState(sound->voice, 0);
        sound->unk90 |= 0x40;
        if (sound->fadeFrames > 0)
            sound->unk90 |= 0x20;
        nn_os_CriticalSection_Leave(lock);
        return;
    }
    if (!(sound->unk90 & 0x200))
        return;
    void *lock = status->unk08;
    nn_os_CriticalSection_Enter(lock);
    sndVoiceFree(sound->voice);
    sound->voice = FUN_002bd29c(0x7fff, 0, 0);
    nn_snd_CTR_Voice_SetMixParam(sound->voice, sound->mix);
    nn_snd_CTR_Voice_SetPitch(sound->voice, 1.0f);
    sound->unk90 = 0;
    for (s32 i = 0; i < 2; ++i)
        nn_snd_CTR_InitializeWaveBuffer(sound->waveBuffers[i]);
    soundQueueArchiveWaveBuffers(sound->voice, sound->data, sound->waveBuffers[0], sound->waveBuffers[1], 0);
    asdWaveVoicePrepareFade(sound, frames, sound->targetVolume, secondaryVolume);
    nn_os_CriticalSection_Leave(lock);
}
}
