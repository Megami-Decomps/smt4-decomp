/* NON_MATCHING: list traversal and the volume clamp retain different registers and branch layouts. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

struct WaveVoiceListLinks {
    /* 0x00 */ AsdSndWaveVoice *next;
    /* 0x04 */ AsdSndWaveVoice *previous;
};

extern "C" {
extern AsdSndStatus g_asdSoundStatus;
void asdWaveVoicePrepareFade(AsdSndWaveVoice *voice, s32 frames, f32 volume, f32 secondaryVolume);

void FUN_0010b864(AsdSndWaveVoice *voice, u32 level, s32 frames)
{
    if (!voice) {
        return;
    }
    AsdSndWaveVoice *node = (AsdSndWaveVoice *)g_asdSoundStatus.objects;
    if (node) {
        while (node != voice) {
            WaveVoiceListLinks *links = (WaveVoiceListLinks *)node->unk70;
            if (!links->next) {
                ((WaveVoiceListLinks *)voice->unk70)->previous = node;
                links->next = voice;
                break;
            }
            node = links->next;
        }
    } else {
        g_asdSoundStatus.objects = voice;
        ++g_asdSoundStatus.objectCount;
    }
    f32 volume = 0.0f;
    if (level) {
        volume = 1.0f + ((f32)level - 64.0f) * (2.0f / 127.0f);
        if (volume > 2.0f) {
            volume = 2.0f;
        }
    }
    asdWaveVoicePrepareFade(voice, frames, volume, 1.0f);
}
}
