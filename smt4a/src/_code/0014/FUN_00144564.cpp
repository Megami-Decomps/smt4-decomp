#include "sound/SoundSystemVolume.h"

extern "C" {
extern SoundSystemVolumeView g_asdSoundSystem;
void FUN_0015e30c(SoundParameter* parameter, f32 value);

/* Stores the value and applies it to the sound parameter while the sound layer is enabled. */
void FUN_00144564(f32 value)
{
    SoundVolumeBlock *block = &g_asdSoundSystem.block;
    if (block->enabled != 0) {
        block->value = value;
        FUN_0015e30c(&block->parameter, value);
    }
}
}
