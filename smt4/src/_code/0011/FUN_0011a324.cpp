/* NON_MATCHING: Retail ldr r5, [pc, #136] differs from recovered cmp r0, #64. */
#include "common.h"

struct SoundVolumeStateView {
    u8 unk00[0x87C];                 // 0x000
    void* sounds[4];                 // 0x87C
    u8 unk88C[0x1BD];                // 0x88C
    u8 volume;                      // 0xA49
};

extern "C" {
extern SoundVolumeStateView DAT_004e26ec;
void nw_snd_internal_BasicSound_SetVolume(void* sound, f32 volume, s32 frames);
}

// Store the capped volume and apply its normalized gain to each occupied sound slot.
extern "C" void FUN_0011a324(u32 volume)
{
    SoundVolumeStateView* state = &DAT_004e26ec;
    if (state == 0) {
        return;
    }

    state->volume = (u8)volume;
    if (volume > 64) {
        state->volume = 64;
    }

    f32 gain;
    if (volume == 0) {
        gain = 0.0f;
    } else {
        gain = 1.0f + ((f32)(u32)state->volume - 64.0f) * (1.0f / 63.5f);
        if (gain > 1.0f) {
            gain = 1.0f;
        }
    }

    for (u8 index = 0; index < 4; ++index) {
        if (state->sounds[index] != 0) {
            nw_snd_internal_BasicSound_SetVolume(state->sounds[index], gain, 0);
        }
    }
}
