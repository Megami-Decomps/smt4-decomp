#include "common.h"
#include <stddef.h>

struct BasicSound;
extern "C" void nw_snd_internal_BasicSound_SetVolume(BasicSound* sound, u32 frames, f32 volume);

static inline void soundSetVolume(BasicSound* sound, f32 volume)
{
    if (sound != NULL) {
        nw_snd_internal_BasicSound_SetVolume(sound, 0, volume);
    }
}

struct SoundHandle {
    /* 0x00 */ BasicSound* sound;
};
struct SoundVolumeStateView {
    /* 0x000 */ u8 unk00[0x87C];
    /* 0x87C */ SoundHandle handles[4];
    /* 0x88C */ u8 unk88C[0x1BD];
    /* 0xA49 */ u8 volume;
};
union VolumeScale {
    f32 value;
    s32 bits;
};
typedef char SoundVolumeStateLayoutCheck[sizeof(SoundHandle) == 4 &&
    offsetof(SoundVolumeStateView, handles) == 0x87C && offsetof(SoundVolumeStateView, volume) == 0xA49 ? 1 : -1];

extern "C" {
extern __weak SoundVolumeStateView DAT_004e26ec;

// Store the capped volume and apply its normalized gain to each occupied sound slot.
void soundApplyVolumeToSlots(u32 volume)
{
    SoundVolumeStateView* system = &DAT_004e26ec;
    if (system == NULL) {
        return;
    }
    system->volume = (u8)volume;
    if (volume > 64) {
        system->volume = 64;
    }
    VolumeScale scale;
    if (volume == 0) {
        scale.value = 0.0f;
    } else {
        scale.value = 1.0f + ((f32)(u32)system->volume - 64.0f) * (2.0f / 127.0f);
        if (scale.bits > 0x3F800000) {
            scale.value = 1.0f;
        }
    }
    for (u8 index = 0; index < 4; ++index) {
        BasicSound *sound = system->handles[index].sound;
        soundSetVolume(sound, scale.value);
    }
}
}
