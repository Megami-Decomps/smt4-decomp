/* NON_MATCHING: only retail's hoisted `mov r7, #256` (the 0x100 fade flag kept in r7, so r7/r8 are saved) differs,
 * as in the IV twin asdWaveVoiceFadeOut. */
#include "common.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "shard/W6_W6Match1_CriticalSection.h"

struct AsdFadeVoice {
    /* 0x00 */ u8 unk00[0x64];
    /* 0x64 */ f32 volume;
};

extern "C" {
extern AsdSndStatusApoc g_asdSoundStatus;
extern CriticalSection DAT_0063f4f0;

void nn_snd_CTR_Voice_SetState(AsdFadeVoice *voice, s32 state);

/* Whether the sound is in the status's object list (the IV twin asdWaveVoiceFadeOut walks it the same way). */
static bool asdSoundObjectIsLive(AsdSndObject *sound)
{
    for (AsdSndObject *item = g_asdSoundStatus.objects; item != NULL; item = item->next) {
        if (item == sound) {
            return true;
        }
    }
    return false;
}

void asdSoundObjectFadeOut(AsdSndObject *sound, s32 frames)
{
    if (sound == NULL) {
        return;
    }

    if (asdSoundObjectIsLive(sound)) {
        ScopedCriticalLock lock(DAT_0063f4f0);
        u32 flags = sound->flags;
        if ((flags & 2) != 0) {
            if (frames > 0) {
                if ((flags & 0x20) != 0) {
                    flags &= ~0x20u;
                    sound->flags = flags;
                }
                flags |= 0x10;
                sound->flags = flags;
                sound->fadeElapsed = 0;
                sound->fadeFrames = frames;

                AsdFadeVoice *voice = reinterpret_cast<AsdFadeVoice *>(sound->voices[0]);
                f32 volume = voice->volume;
                sound->volume = volume < sound->volume ? volume : sound->volume;
                sound->flags = flags | 0x100;
            } else {
                for (s32 index = 0; index < sound->voiceCount; ++index) {
                    AsdFadeVoice *voice = reinterpret_cast<AsdFadeVoice *>(sound->voices[index]);
                    if (voice != NULL) {
                        nn_snd_CTR_Voice_SetState(voice, 1);
                    }
                }
            }
        }
    }
}
}
