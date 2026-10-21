/* NON_MATCHING: retail uses ldr r1, [pc, #48] where the compiled block uses ldr r0, [pc, #24]. */
#include "common.h"

struct SoundVolumeState {
    u8 unk00[0xC0];
    f32 volume;                  // 0xC0
    u8 unkC4[0x08];
};

struct SoundSystem {
    u8 unk00[0x1210];
    SoundVolumeState volumeState; // 0x1210
    u8 volumeEnabled;             // 0x12DC
};

extern "C" {
extern SoundSystem g_asdSoundSystem;
void FUN_0015e2fc(SoundVolumeState* state, f32 volume);

void FUN_00145048(f32 volume)
{
    if (g_asdSoundSystem.volumeEnabled != 0) {
        g_asdSoundSystem.volumeState.volume = volume;
        FUN_0015e2fc(&g_asdSoundSystem.volumeState, volume);
    }
}
}
