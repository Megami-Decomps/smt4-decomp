/* NON_MATCHING: system/actor bases use different anchors; readiness guard and volume arithmetic use different register schedules. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include <stddef.h>

namespace {
struct SpatialSoundActorView {
    u8 unk00[0x48];
    f32 volume; // 0x48
    u8 unk4C[0x3C];
};
struct SpatialSoundOwnerView {
    u8 unk00[0x10];
    void *ready; // 0x10
};
// Apocalypse fields extend past the IV AsdSoundSystem layout: keep this view local.
struct SpatialSoundSystemView {
    u8 archive[0x890];
    SpatialSoundActorView actors[16]; // 0x890
    u32 handles[16]; // 0x1110
    u8 unk1150[0x184];
    u32 playingMask; // 0x12D4
    u8 unk12D8[4];
    u8 ready; // 0x12DC
    u8 volume; // 0x12DD
    u8 unk12DE[0x3A];
    SpatialSoundOwnerView *owner; // 0x1318
};
typedef char SpatialSoundSystemViewOffsetsCheck[
    sizeof(SpatialSoundActorView) == 0x88 && offsetof(SpatialSoundActorView, volume) == 0x48 &&
    offsetof(SpatialSoundSystemView, actors) == 0x890 &&
    offsetof(SpatialSoundSystemView, handles) == 0x1110 &&
    offsetof(SpatialSoundSystemView, playingMask) == 0x12D4 &&
    offsetof(SpatialSoundSystemView, ready) == 0x12DC &&
    offsetof(SpatialSoundSystemView, volume) == 0x12DD &&
    offsetof(SpatialSoundSystemView, owner) == 0x1318 ? 1 : -1];
}

extern "C" {
extern AsdSoundSystem g_asdSoundSystem;
s32 nw_snd_SoundArchive_IsAvailable(const void *archive);
s32 nw_snd_SoundArchive_GetSoundType(const void *archive, s32 soundId);
s32 asd3dSoundActorIsPlaying(u32 actor);
s32 FUN_00151340(s32 soundId);
u32 FUN_0015e2bc(SpatialSoundActorView *actor, u32 *handle, s32 soundId, s32 flags);

// Start a sound on an idle spatial actor and apply the system's normalized volume.
u8 FUN_0032cb58(s32 soundId, u32 actorIndex)
{
    SpatialSoundSystemView *system = reinterpret_cast<SpatialSoundSystemView *>(&g_asdSoundSystem);
    u8 success = 0;
    if (system->ready != 0 && system->owner->ready != NULL && actorIndex < 16 &&
        nw_snd_SoundArchive_IsAvailable(system->archive) != 0 &&
        nw_snd_SoundArchive_GetSoundType(system->archive, soundId) != 0 &&
        asd3dSoundActorIsPlaying(actorIndex) == 0 && FUN_00151340(soundId) != 0) {
        success = (FUN_0015e2bc(&system->actors[actorIndex], &system->handles[actorIndex], soundId, 0) & 0xFF) == 0;
        union { f32 value; s32 bits; } volume;
        if (system->volume == 0) {
            volume.value = 0.0f;
        } else {
            volume.value = ((f32)system->volume - 64.0f) * 0.015748031f + 1.0f;
            // Nonnegative IEEE float bit patterns preserve their numeric ordering.
            if (volume.bits > 0x3F800000) {
                volume.value = 1.0f;
            }
        }
        system->actors[actorIndex].volume = volume.value;
        if (success != 0) {
            system->playingMask |= 1 << actorIndex;
        }
    }
    return success;
}
}
