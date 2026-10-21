/* NON_MATCHING: retail uses push {r4, r5} where the compiled block uses push {r4, r5}. */
#include "common.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSndStatusApoc g_asdSoundStatus;
void FUN_00152d64(AsdSndObject *sound, u32 arg, f32 volume, f32 scale);

void asdSoundObjectRegister(AsdSndObject *sound, u32 volumeSteps, u32 arg)
{
    if (sound == NULL) {
        return;
    }

    AsdSndObject *node = g_asdSoundStatus.objects;
    if (node != NULL) {
        while (node != sound) {
            AsdSndObject *next = node->next;
            if (next == NULL) {
                sound->prev = node;
                node->next = sound;
                ++g_asdSoundStatus.objectCount;
                break;
            }
            node = next;
        }
    } else {
        g_asdSoundStatus.objects = sound;
        ++g_asdSoundStatus.objectCount;
    }

    f32 volume = 1.0f;
    if (volumeSteps == 0) {
        volume = 0.0f;
    } else {
        volume += (static_cast<f32>(volumeSteps) - 64.0f)
                  * 0.015748031437397003f;
        if (volume > 2.0f) {
            volume = 2.0f;
        }
    }

    FUN_00152d64(sound, arg, volume, 1.0f);
}
}
