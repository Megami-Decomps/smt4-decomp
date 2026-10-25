/* NON_MATCHING: the singleton address is weak (retail keeps the null guard) and now matches; the per-handle fader call is built as a branch around mov+bl where retail predicates it (blne) after hoisting the volume copy. */
#include "common.h"
#include <stddef.h>
struct Fader;
extern "C" void FUN_0015e874(Fader*, u32, f32);

static inline void audioFaderSetVolume(Fader* fader, f32 volume)
{
    if (fader != NULL) {
        FUN_0015e874(fader, 0, volume);
    }
}

struct AudioVolumeHandle {
    /* 0x00 */ Fader* fader;
};
struct AudioVolumeState {
    /* 0x000 */ u8 unk000[0x8BC];
    /* 0x8BC */ AudioVolumeHandle handles[4];
    /* 0x8CC */ u8 unk8CC[0x1BD];
    /* 0xA89 */ u8 volume;
};
union VolumeScale {
    f32 value;
    s32 bits;
};
typedef char AudioVolumeStateLayoutCheck[sizeof(AudioVolumeHandle) == 4 &&
    offsetof(AudioVolumeState, handles) == 0x8BC && offsetof(AudioVolumeState, volume) == 0xA89 ? 1 : -1];
extern "C" {
extern __weak AudioVolumeState DAT_0063ea3c;

void FUN_00154e34(u32 volume)
{
    AudioVolumeState* system = &DAT_0063ea3c;
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
        audioFaderSetVolume(system->handles[index].fader, scale.value);
    }
}
}
