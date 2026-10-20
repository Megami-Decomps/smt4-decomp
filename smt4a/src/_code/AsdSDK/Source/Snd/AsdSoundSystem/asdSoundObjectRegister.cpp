#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSndStatusApoc g_asdSoundStatus;

void FUN_00152d64(AsdSndObject *sound, u32 arg, f32 volume);

/* Registers a sound in the live list (at the end, once) and starts it; `volume` is overridden
 * by `volumeSteps` when that is nonzero. */
void asdSoundObjectRegister(AsdSndObject *sound, u32 volumeSteps, u32 arg, f32 volume)
{
    AsdSndObject *node;
    AsdSndObject *last;

    if (sound == NULL) {
        return;
    }
    node = g_asdSoundStatus.objects;
    if (node != NULL) {
        do {
            last = node;
            if (last == sound) {
                if (volumeSteps != 0) {
                    volume = (f32)volumeSteps;
                }
                FUN_00152d64(sound, arg, volume);
                return;
            }
            node = last->next;
        } while (last->next != NULL);
        sound->prev = last;
        last->next = sound;
        g_asdSoundStatus.objectCount++;
    } else {
        g_asdSoundStatus.objectCount++;
        g_asdSoundStatus.objects = sound;
    }
    if (volumeSteps != 0) {
        volume = (f32)volumeSteps;
    }
    FUN_00152d64(sound, arg, volume);
}

} /* extern "C" */
