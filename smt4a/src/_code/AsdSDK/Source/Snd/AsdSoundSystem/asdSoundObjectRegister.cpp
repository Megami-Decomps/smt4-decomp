/* NON_MATCHING: list append now follows retail (tail walk without re-comparing nodes; status pointer); retail copies the scale constant into s1 before the volume branch, keeps `volumeSteps` in ip across the push and orders the tail-call moves differently. */
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
        if (node != sound) {
            AsdSndObject *next;
            while ((next = node->next) != NULL) {
                node = next;
            }
            sound->prev = node;
            node->next = sound;
            ++status->objectCount;
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
