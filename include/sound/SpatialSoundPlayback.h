#ifndef SOUND_SPATIAL_SOUND_PLAYBACK_H
#define SOUND_SPATIAL_SOUND_PLAYBACK_H
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

struct SpatialSoundActor {
    u8 prefix[0x48];
    f32 volume;
    u8 suffix[0x38];
};
struct SpatialSoundPlayback {
    u8 prefix[0x3C];
    SpatialSoundActor actors[16];
    u32 handles[16];
    u8 unk8BC[0x184];
    u32 activeMask;
    u8 unkA44[4];
    u8 enabled;
    u8 volume;
    u8 unkA4A[2];
};
typedef char SpatialSoundPlaybackLayoutCheck[
    sizeof(SpatialSoundActor) == 0x84 && offsetof(SpatialSoundActor, volume) == 0x48 &&
    offsetof(SpatialSoundPlayback, handles) == 0x87C &&
    offsetof(SpatialSoundPlayback, activeMask) == 0xA40 &&
    offsetof(SpatialSoundPlayback, enabled) == 0xA48 && sizeof(SpatialSoundPlayback) == 0xA4C ? 1 : -1];
#endif
