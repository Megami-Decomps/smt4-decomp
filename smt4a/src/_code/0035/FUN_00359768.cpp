/* NON_MATCHING: global-base address materialization and saved actor/volume register allocation differ. */
#include "common.h"
#include <stddef.h>

/* Apocalypse's sound system extends beyond the shared IV work-area layout. */
struct SpatialSoundActorView {
    u8 unk00[0x3c];
    u8 playback[0x48]; /* 0x3c: embedded sound actor playback object */
    f32 volume; /* 0x84 */
};
struct SpatialSoundActorsView {
    SpatialSoundActorView actors[16];
    u8 unk880[0x3c];
    u32 handles[16]; /* 0x8bc */
    u8 unk8fc[0x184];
    u32 activeMask; /* 0xa80 */
};
struct SpatialSoundDeviceView {
    u8 unk00[0x10];
    void *device;
};
struct ApocalypseSpatialSoundView {
    u8 unk000[0x854];
    SpatialSoundActorsView spatial; /* 0x854 */
    u8 unk12d8[4];
    u8 ready; /* 0x12dc */
    u8 unk12dd[0x3b];
    SpatialSoundDeviceView *device; /* 0x1318 */
};
typedef char SpatialSoundActorOffsets[
    sizeof(SpatialSoundActorView) == 0x88 &&
    offsetof(ApocalypseSpatialSoundView, spatial.actors) == 0x854 &&
    offsetof(ApocalypseSpatialSoundView, spatial.activeMask) == 0x12d4 &&
    offsetof(ApocalypseSpatialSoundView, device) == 0x1318 ? 1 : -1];

extern "C" {
extern ApocalypseSpatialSoundView g_asdSoundSystem;
s32 nw_snd_SoundArchive_IsAvailable(void *);
s32 nw_snd_SoundArchive_GetSoundType(void *, u32);
s32 asd3dSoundActorIsPlaying(u32);
s32 FUN_00151340(u32);
u32 FUN_0015e2bc(void *, u32 *, u32, s32);

/* Start an idle spatial actor and convert the 0..127 volume to its relative gain. */
u8 FUN_00359768(u32 soundId, u32 actorIndex, u32 volume)
{
    SpatialSoundActorsView *spatial = &g_asdSoundSystem.spatial;
    SpatialSoundDeviceView *device = g_asdSoundSystem.device;
    u8 started = 0;
    if (g_asdSoundSystem.ready && device->device && actorIndex < 16 &&
        nw_snd_SoundArchive_IsAvailable(&g_asdSoundSystem) &&
        nw_snd_SoundArchive_GetSoundType(&g_asdSoundSystem, soundId) &&
        !asd3dSoundActorIsPlaying(actorIndex) && FUN_00151340(soundId)) {
        SpatialSoundActorView *actor = &spatial->actors[actorIndex];
        started = static_cast<u8>(FUN_0015e2bc(actor->playback, &spatial->handles[actorIndex], soundId, 0)) == 0;
        f32 gain;
        if (volume == 0)
            gain = 0.0f;
        else
            gain = (static_cast<f32>(volume) - 64.0f) * 0.015748031f + 1.0f;
        actor->volume = gain;
        if (started)
            spatial->activeMask |= 1 << actorIndex;
    }
    return started;
}
}
