#include "sound/SoundSystemVolume.h"

extern "C" {
extern SoundSystemVolumeView g_asdSoundSystem;
void FUN_0015e304(SoundParameter* parameter, f32 level);

/* Stores the level and applies it to the sound parameter while the sound layer is enabled. */
void asdSnd3dSetOutputVolume(f32 level)
{
    SoundVolumeBlock *block = &g_asdSoundSystem.block;
    if (block->enabled != 0) {
        block->level = level;
        FUN_0015e304(&block->parameter, level);
    }
}
}
