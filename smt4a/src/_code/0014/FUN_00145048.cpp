/* NON_MATCHING: only the enabled-flag address differs: retail forms it as (base + 0x1254) + 0x88 (a block at 0x1254 that is
 * not recovered yet), built as (base + 0x12DC). */
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
