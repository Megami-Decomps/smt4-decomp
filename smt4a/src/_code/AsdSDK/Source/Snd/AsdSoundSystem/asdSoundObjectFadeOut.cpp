#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSndStatusApoc g_asdSoundStatus;
extern u8 DAT_0063f4f0; /* nn::os::CriticalSection guarding the sound layer */

void nn_os_CriticalSection_Enter(void *lock);
void nn_os_CriticalSection_Leave(void *lock);
void nn_snd_CTR_Voice_SetState(u32 voice, s32 state);

/* Starts stopping a registered sound: with `frames` >= 1 it fades out over that many frames
 * (never getting louder than it is), otherwise its voices are stopped at once. */
void asdSoundObjectFadeOut(AsdSndObject *sound, s32 frames)
{
    AsdSndObject *node = g_asdSoundStatus.objects;
    u32 flags;
    f32 volume;
    s32 i;

    if (sound == NULL) {
        return;
    }
    for (;;) {
        if (node == NULL) {
            return;
        }
        if (node == sound) {
            break;
        }
        node = node->next;
    }

    nn_os_CriticalSection_Enter(&DAT_0063f4f0);
    flags = sound->flags;
    if ((flags & 2) != 0) {
        if (frames >= 1) {
            if ((flags & 0x20) != 0) {
                flags &= ~0x20;
                sound->flags = flags;
            }
            sound->flags = flags | 0x10;
            sound->fadeElapsed = 0;
            sound->fadeFrames = frames;
            volume = *(f32 *)(sound->voices[0] + 100);
            if (sound->volume <= volume) {
                volume = sound->volume;
            }
            sound->volume = volume;
            sound->flags = flags | 0x110;
        } else {
            for (i = 0; i < sound->voiceCount; i++) {
                if (sound->voices[i] != 0) {
                    nn_snd_CTR_Voice_SetState(sound->voices[i], 1);
                }
            }
        }
    }
    nn_os_CriticalSection_Leave(&DAT_0063f4f0);
}

} /* extern "C" */
