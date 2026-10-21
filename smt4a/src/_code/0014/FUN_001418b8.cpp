/* NON_MATCHING: retail uses push {r4, r5, r6, lr} where the compiled block uses push {r4, lr}. */
#include "common.h"

struct SoundSystem;

extern "C" {
extern SoundSystem g_asdSoundSystem;

bool nw_snd_SoundArchive_IsAvailable(SoundSystem* soundSystem);
void FUN_0015fe40(SoundSystem* soundSystem, u32 soundId);

void FUN_001418b8(u32 soundId)
{
    if (nw_snd_SoundArchive_IsAvailable(&g_asdSoundSystem)) {
        FUN_0015fe40(&g_asdSoundSystem, soundId);
    }
}
}
