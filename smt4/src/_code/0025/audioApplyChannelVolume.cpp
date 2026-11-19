#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "AsdSDK/Source/Snd/AsdSoundVolume.h"

extern "C" AsdSoundSystem g_asdSound;

/* Sets the volume of a one-sound output, optionally ramping over several frames. */
extern "C" void audioApplyChannelVolume(u32 slot, u32 value, s32 frames)
{
    if (slot == 0 || slot == 1) {
        AsdSndSlotC *output = g_asdSound.outputC[slot];
        if (output != NULL) {
            output->volume = value;
            if (value > 127) {
                value = 127;
                output->volume = value;
            }
            f32 gain;
            if (value == 0) {
                gain = 0.0f;
            } else {
                gain = 1.0f + (output->volume - 64.0f) * (2.0f / 127.0f);
                if (gain > 2.0f) {
                    gain = 2.0f;
                }
            }
            asdSoundHandleSetVolume(output->handle, frames, gain);
        }
    }
}
