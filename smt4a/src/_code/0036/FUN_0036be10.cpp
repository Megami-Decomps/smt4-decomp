/* NON_MATCHING: same logic; retail reaches the ready byte through a +0x1254 sub-struct anchor ((base + 0x1000 + 0x254) + 0x88) and schedules `mov r1, r6` before the handle test; built folds the ready flag into a pool offset and reorders the moves */
#include "common.h"

/* Apocalypse's sound system extends beyond the shared IV work-area layout. */
struct SpatialSoundActorView {
    u8 unk00[0x3c];
    u8 playback[0x4c];
};
struct SpatialSoundActorsView {
    SpatialSoundActorView actors[16];
    u8 unk880[0x3c];
    u32 handles[16];    /* 0x8bc */
    u8 unk8fc[0x184];
    u32 activeMask;     /* 0xa80 */
};
struct ApocalypseSpatialSoundView {
    u8 unk000[0x854];
    SpatialSoundActorsView spatial; /* 0x854 */
    u8 unk12d8[4];
    u8 ready; /* 0x12dc */
};

extern "C" {
extern u8 g_asdSoundSystem[];
s32 asd3dSoundActorIsPlaying(u32 actorIndex);
void asdSoundObjectStop(u32 handle, u32 frames);

/* Stops spatial actor `actorIndex` (when playing) and clears its bit in the active mask. */
void FUN_0036be10(u32 actorIndex, u32 frames)
{
    ApocalypseSpatialSoundView *system = (ApocalypseSpatialSoundView *)g_asdSoundSystem;
    SpatialSoundActorsView *spatial = &system->spatial;

    if (system->ready && actorIndex < 16 && asd3dSoundActorIsPlaying(actorIndex)) {
        if (spatial->handles[actorIndex] != 0) {
            asdSoundObjectStop(spatial->handles[actorIndex], frames);
        }
        spatial->activeMask &= ~(1u << actorIndex);
    }
}

} /* extern "C" */
