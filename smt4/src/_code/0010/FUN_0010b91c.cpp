/* NON_MATCHING: list/critical-section register allocation, fade flag materialization, and VFP minimum registers differ. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSndStatus g_asdSoundStatus;
void nn_os_CriticalSection_Enter(void *section);
void nn_os_CriticalSection_Leave(void *section);
void nn_snd_CTR_Voice_SetState(u32 voice, s32 state);

void FUN_0010b91c(AsdSndWaveVoice *voice, s32 frames)
{
    struct VoiceVolumeView {
        u8 unk00[0x64];
        f32 volume;
    };
    if (voice == NULL) {
        return;
    }
    for (AsdSndWaveVoice *current = (AsdSndWaveVoice *)g_asdSoundStatus.objects; current != NULL; current = current->link.next) {
        if (current != voice) {
            continue;
        }
        nn_os_CriticalSection_Enter(g_asdSoundStatus.unk08);
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
                voice->unk90 = flags | 0x100;
            } else {
                nn_snd_CTR_Voice_SetState(voice->voice, 1);
            }
        }
        nn_os_CriticalSection_Leave(g_asdSoundStatus.unk08);
        return;
    }
}
}
