/* NON_MATCHING: only the base-address scheduling differs (retail keeps the base in r3 and forms the spatial block first, then the 0x1254 tail in place; the build keeps the base in r2). */
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
    u8 unk9bc[0x44];
};
struct SpatialSoundTail {
    u8 unk00[0x88];
    u8 ready; /* 0x88 */
};
struct ApocalypseSpatialSoundView {
    u8 unk000[0x854];
    SpatialSoundActorsView spatial; /* 0x854 */
    SpatialSoundTail tail; /* 0x1254 */
};
}

extern "C" {
extern ApocalypseSpatialSoundView g_asdSoundSystem;
void trackerMoveTo(void *playback, const Vec3 *position);

/* Stores the target position for spatial actor `actorIndex` and moves the actor there (when the system is ready). */
void FUN_0032cc8c(u32 actorIndex, const Vec3 *position)
{
    ApocalypseSpatialSoundView *system = &g_asdSoundSystem;
    SpatialSoundTail *tail = &system->tail;
    SpatialSoundActorsView *spatial = &system->spatial;

    if (tail->ready != 0 && actorIndex < 16) {
        spatial->positions[actorIndex].x = position->x;
        spatial->positions[actorIndex].y = position->y;
        spatial->positions[actorIndex].z = position->z;
        trackerMoveTo(spatial->actors[actorIndex].playback, &spatial->positions[actorIndex]);
    }
}
}
