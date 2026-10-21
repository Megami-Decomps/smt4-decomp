/* NON_MATCHING: retail uses ldr r1, [pc, #48] where the compiled block uses ldr r0, [pc, #24]. */
#include "common.h"

struct SoundParameter {
    u8 unk00[0xB8];
};

struct SoundSystem {
    u8 unk00[0x1210];
    SoundParameter parameter; // 0x1210
    f32 value;                // 0x12C8
    u8 unk12CC[0x10];
    u8 enabled;               // 0x12DC
};

extern "C" {
extern SoundSystem g_asdSoundSystem;
void FUN_0015e30c(SoundParameter* parameter, f32 value);

void FUN_00144564(f32 value)
{
    if (g_asdSoundSystem.enabled != 0) {
        g_asdSoundSystem.value = value;
        FUN_0015e30c(&g_asdSoundSystem.parameter, value);
    }
}
}
