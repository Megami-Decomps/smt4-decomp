/* NON_MATCHING: the flag load and restart mask's literal load are swapped, as are the predicated sample-index moves. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "shard/W6_W6Match1_CriticalSection.h"
#include "shard/W6_W6Match7_WaveBuffer.h"
#include "shard/W6_W6Match8_LightUniforms.h"

extern "C" {
extern CriticalSection DAT_0063f4f0;
void soundVoiceSetVolume(u32, f32);
void nn_snd_CTR_Voice_SetState(u32, u32);
void nn_snd_CTR_FreeVoice(u32);
void nn_snd_CTR_Voice_SetMixParam(u32, const void *);
void nn_snd_CTR_Voice_SetPitch(u32, f32);
void nn_snd_CTR_InitializeWaveBuffer(void *);

enum {
    SOUND_START_BLOCKED = 0x2,
    SOUND_FADING_IN = 0x20,
    SOUND_STARTED = 0x40,
    SOUND_RESTART_VOICES = 0x200,
    SOUND_STREAM_VOICE_PRIORITY = 0x7fff,
    SOUND_WAVE_BUFFERS_PER_VOICE = 2,
};

/* Starts a sound with an optional fade, or rebuilds the voices before restarting it. */
void asdSoundObjectStartOrRestart(AsdSndObject *sound, s32 frames, f32 volume, f32 scale)
{
    if (sound == NULL)
        return;
    if (sound->stream.active) {
        CriticalSection &section = DAT_0063f4f0;
        if (!(sound->flags & (SOUND_START_BLOCKED | SOUND_RESTART_VOICES))) {
            ScopedCriticalLock lock(section);
            sound->fadeFrames = frames;
            sound->volume = volume;
            sound->fadeElapsed = 0;
            for (s32 i = 0; i < sound->voiceCount; ++i) {
                if (sound->fadeFrames > 0)
                    soundVoiceSetVolume(sound->playback.voices[i], 0.0f);
                else
                    soundVoiceSetVolume(sound->playback.voices[i], sound->volume);
                nn_snd_CTR_Voice_SetState(sound->playback.voices[i], 0);
            }
            sound->flags |= SOUND_STARTED;
            if (sound->fadeFrames > 0)
                sound->flags |= SOUND_FADING_IN;
        } else if (sound->flags & SOUND_RESTART_VOICES) {
            ScopedCriticalLock lock(section);
            for (s32 i = 0; i < sound->voiceCount; ++i) {
                nn_snd_CTR_FreeVoice(sound->playback.voices[i]);
                u32 voice = FUN_001af874(SOUND_STREAM_VOICE_PRIORITY, 0, 0);
                sound->playback.voices[i] = voice;
                nn_snd_CTR_Voice_SetMixParam(voice, sound->playback.mix[i]);
                nn_snd_CTR_Voice_SetPitch(sound->playback.voices[i], 1.0f);
                sound->flags = 0;
                for (s32 buffer = 0; buffer < SOUND_WAVE_BUFFERS_PER_VOICE; ++buffer)
                    nn_snd_CTR_InitializeWaveBuffer(sound->stream.waveBuffers[i * SOUND_WAVE_BUFFERS_PER_VOICE + buffer]);
                soundQueueArchiveWaveBuffers((WavePlayer *)sound->playback.voices[i], sound->playback.sampleParameters[i],
                    (WaveBuffer *)sound->stream.waveBuffers[i * SOUND_WAVE_BUFFERS_PER_VOICE],
                    (WaveBuffer *)sound->stream.waveBuffers[i * SOUND_WAVE_BUFFERS_PER_VOICE + 1], i != 0);
            }
            asdSoundObjectStartOrRestart(sound, frames, sound->volume, scale);
        }
    }
}
} /* extern "C" */
