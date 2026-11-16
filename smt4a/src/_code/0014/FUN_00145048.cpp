#include "sound/SoundSystemVolume.h"

extern "C" {
extern SoundSystemVolumeView g_asdSoundSystem;
void FUN_0015e2fc(SoundParameter* parameter, f32 volume);

/* Stores the volume and applies it to the sound parameter while the sound layer is enabled. */
void FUN_00145048(f32 volume)
{
    SoundVolumeBlock *block = &g_asdSoundSystem.block;
    if (block->enabled != 0) {
        block->volume = volume;
        FUN_0015e2fc(&block->parameter, volume);
    }
}
}
