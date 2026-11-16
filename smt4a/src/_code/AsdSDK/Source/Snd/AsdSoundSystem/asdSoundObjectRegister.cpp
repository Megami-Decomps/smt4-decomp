/* NON_MATCHING: the list walk now matches retail (it rechecks for the sound itself at every node); remaining: retail places the empty-list arm after the tail call, keeps `volumeSteps` in ip across the push and copies the 1.0 scale into s1 from the volume's initial value. */
#include "common.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSndStatusApoc g_asdSoundStatus;
void asdSoundObjectStartOrRestart(AsdSndObject *sound, u32 arg, f32 volume, f32 scale);

void asdSoundObjectRegister(AsdSndObject *sound, u32 volumeSteps, u32 arg)
{
    if (sound == NULL) {
        return;
    }

    AsdSndStatusApoc *status = &g_asdSoundStatus;
    AsdSndObject *node = status->objects;
    if (node != NULL) {
        for (;;) {
            if (node == sound)
                break;
            AsdSndObject *next = node->next;
            if (next != NULL) {
                node = next;
                continue;
            }
            sound->prev = node;
            node->next = sound;
            ++status->objectCount;
            break;
        }
    } else {
        status->objects = sound;
        ++status->objectCount;
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

    asdSoundObjectStartOrRestart(sound, arg, volume, 1.0f);
}
}
