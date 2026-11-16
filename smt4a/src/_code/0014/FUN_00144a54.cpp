/* NON_MATCHING: only the enabled-flag address differs: retail forms it as (base + 0x1254) + 0x88 (a block at 0x1254 that is
 * not recovered yet), built as (base + 0x12DC). */
#include "sound/SoundSystemVolume.h"

extern "C" {
extern SoundSystemVolumeView g_asdSoundSystem;
void FUN_0015e304(SoundParameter* parameter, f32 level);

/* Stores the level and applies it to the sound parameter while the sound layer is enabled. */
void FUN_00144a54(f32 level)
{
    SoundVolumeBlock *block = &g_asdSoundSystem.block;
    if (block->enabled != 0) {
        block->level = level;
        FUN_0015e304(&block->parameter, level);
    }
}
}
