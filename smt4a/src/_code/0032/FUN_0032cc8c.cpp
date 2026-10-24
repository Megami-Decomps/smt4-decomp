/* NON_MATCHING: retail keeps &g_asdSoundSystem in a register and derives the ready-flag and spatial-actor anchors with adds (and copies the vector as two vldr/vstr plus an ldr/str); built folds the offsets into pool constants and copies with ldm/stm */
#include "common.h"

namespace {
struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
};
/* Apocalypse's sound system extends beyond the shared IV work-area layout. */
struct SpatialSoundActorView {
    u8 unk00[0x3c];
    u8 playback[0x4c]; /* 0x3c: embedded sound actor playback object */
};
struct SpatialSoundActorsView {
    SpatialSoundActorView actors[16];
    u8 unk880[0x3c];
    u32 handles[16];    /* 0x8bc */
    Vec3 positions[16]; /* 0x8fc */
};
struct ApocalypseSpatialSoundView {
    u8 unk000[0x854];
    SpatialSoundActorsView spatial; /* 0x854 */
    u8 unk12d8[4];
    u8 ready; /* 0x12dc */
};
}

extern "C" {
extern ApocalypseSpatialSoundView g_asdSoundSystem;
void trackerMoveTo(void *playback, const Vec3 *position);

/* Stores the target position for spatial actor `actorIndex` and moves the actor there (when the system is ready). */
void FUN_0032cc8c(u32 actorIndex, const Vec3 *position)
{
    SpatialSoundActorsView *spatial = &g_asdSoundSystem.spatial;

    if (g_asdSoundSystem.ready != 0 && actorIndex < 16) {
        spatial->positions[actorIndex] = *position;
        trackerMoveTo(spatial->actors[actorIndex].playback, &spatial->positions[actorIndex]);
    }
}
}
