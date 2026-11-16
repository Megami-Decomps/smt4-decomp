#include "common.h"
#include <stddef.h>

namespace {
struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
};
/* Apocalypse's sound actor: the playback object follows a 0x3c-byte header (0x88 bytes). */
struct SpatialSoundActorView {
    u8 unk00[0x3c];
    u8 playback[0x4c]; /* 0x3c: embedded sound actor playback object */
};
/* Apocalypse's 3D sound manager (0x854 in the sound system block). */
struct SpatialSoundManagerView {
    /* 0x000 */ SpatialSoundActorView actors[16];
    /* 0x880 */ u8 unk880[0x3c];
    /* 0x8BC */ u32 handles[16];
    /* 0x8FC */ Vec3 positions[16];
    /* 0x9BC */ u8 unk9BC[0xcc];
    /* 0xA88 */ s8 active; /* the 3D sound state is enabled */
};
struct ApocalypseSpatialSoundView {
    /* 0x000 */ u8 unk000[0x854];
    /* 0x854 */ SpatialSoundManagerView manager;
};
typedef char SpatialSoundManagerViewOffsets[
    offsetof(ApocalypseSpatialSoundView, manager.active) == 0x12DC &&
    offsetof(ApocalypseSpatialSoundView, manager.positions) == 0x1150 ? 1 : -1];
}

extern "C" {
extern ApocalypseSpatialSoundView g_asdSoundSystem;
void trackerMoveTo(void *playback, const Vec3 *position);

/* Moves 3D sound actor `index` to `position` (ignored when 3D sound is off or the index is out of range). */
void FUN_0032cc8c(u32 index, const Vec3 *position)
{
    SpatialSoundManagerView *manager = &g_asdSoundSystem.manager;
    if (manager->active != 0 && index < 16) {
        manager->positions[index].x = position->x;
        manager->positions[index].y = position->y;
        manager->positions[index].z = position->z;
        trackerMoveTo(manager->actors[index].playback, &manager->positions[index]);
    }
}
}
