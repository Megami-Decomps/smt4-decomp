#ifndef SOUND_SOUNDSYSTEMVOLUME_H
#define SOUND_SOUNDSYSTEMVOLUME_H

#include "common.h"
#include <stddef.h>

/* Apocalypse: the sound parameter object the three volume setters apply their value to (opaque). */
struct SoundParameter {
    u8 unk00[0xB8];
};

/* Apocalypse: the part of g_asdSoundSystem from 0x854 that the volume setters reach (FUN_00144564,
 * asdSnd3dSetOutputVolume, FUN_00145048 each store one value and apply it to the parameter). */
struct SoundVolumeBlock {
    u8 unk000[0x9BC];
    SoundParameter parameter; // 0x9BC (system 0x1210)
    f32 value;                // 0xA74 (system 0x12C8)
    f32 level;                // 0xA78 (system 0x12CC)
    f32 volume;               // 0xA7C (system 0x12D0)
    u8 unkA80[8];
    s8 enabled;               // 0xA88 (system 0x12DC): the sound layer is up
};

struct SoundSystemVolumeView {
    u8 unk000[0x854];
    SoundVolumeBlock block;   // 0x854
};

typedef char SoundVolumeBlockOffsets[
    offsetof(SoundVolumeBlock, parameter) == 0x9BC &&
    offsetof(SoundVolumeBlock, value) == 0xA74 &&
    offsetof(SoundVolumeBlock, level) == 0xA78 &&
    offsetof(SoundVolumeBlock, volume) == 0xA7C &&
    offsetof(SoundVolumeBlock, enabled) == 0xA88 ? 1 : -1];

#endif
