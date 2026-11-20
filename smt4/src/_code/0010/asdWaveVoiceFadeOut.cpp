/* NON_MATCHING: only retail's hoisted `mov r7, #256` (the 0x100 fade flag kept in r7, so r7/r8 are saved) differs; every other row matches. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "shard/W6_W6Match1_CriticalSection.h"

extern "C" {
extern AsdSndStatus g_asdSoundStatus;
void nn_snd_CTR_Voice_SetState(u32 voice, s32 state);

/* Whether the voice is in the status's object list (FUN_0010bf78's soundObjectIsLive walks it the same way). */
static bool asdWaveVoiceIsLive(AsdSndWaveVoice *voice)
{
    for (AsdSndWaveVoice *item = (AsdSndWaveVoice *)g_asdSoundStatus.objects; item != NULL; item = item->link.next) {
        if (item == voice) {
            return true;
        }
    }
    return false;
}

/* Starts fading a live, playing voice out over `frames` frames (never above its current volume), or stops it
 * at once when `frames` is not positive. */
void asdWaveVoiceFadeOut(AsdSndWaveVoice *voice, s32 frames)
{
    struct VoiceVolumeView {
        u8 unk00[0x64];
        f32 volume;
    };
    if (voice == NULL) {
        return;
    }
    if (asdWaveVoiceIsLive(voice)) {
        ScopedCriticalLock lock(g_asdSoundStatus.unk08);
        u32 flags = voice->unk90;
        if ((flags & 2) != 0) {
            if (frames > 0) {
                if ((flags & 0x20) != 0) {
                    flags &= ~0x20;
                    voice->unk90 = flags;
                }
                flags |= 0x10;
                voice->unk90 = flags;
                voice->unk84 = 0;
                voice->fadeFrames = frames;
                f32 volume = ((VoiceVolumeView *)voice->voice)->volume;
                voice->targetVolume = volume < voice->targetVolume ? volume : voice->targetVolume;
                flags |= 0x100;
                voice->unk90 = flags;
            } else {
                nn_snd_CTR_Voice_SetState(voice->voice, 1);
            }
        }
    }
}
}
