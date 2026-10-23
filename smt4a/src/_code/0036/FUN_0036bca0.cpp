/* NON_MATCHING: playback-base folding, return-byte test and early-exit layout differ. */
#include "sound/SoundHandlePlayback.h"

extern "C" {
extern SoundHandlePlaybackStateA g_asdSoundSystem;
s32 nw_snd_SoundArchive_IsAvailable(void *archive);
u32 nw_snd_SoundArchive_GetSoundType(void *archive, s32 id);
s32 asd3dSoundActorIsPlaying(u32 channel);
u32 asdSoundEnsureArchiveItemLoaded(u32 id);
u8 FUN_0015e2bc(void *actor, s32 *handle, s32 id, s32 flags);

u8 FUN_0036bca0(s32 id, u32 channel)
{
    struct Actor {
        u8 unk00[0x48];
        f32 volume;
        u8 unk4c[0x3c];
    };
    // The actor array and playback controls lie beyond the shared Apocalypse prefix.
    struct PlaybackView {
        u8 unk000[0x890];
        Actor actors[16];
        s32 handles[16];
        u8 unk1150[0x184];
        u32 active;
        u8 unk12d8[4];
        u8 ready;
        u8 volume;
        u8 unk12de[0x46];
        AsdSndSlotA *slot;
    };
    typedef char PlaybackOffsets[sizeof(Actor) == 0x88 &&
        offsetof(PlaybackView, handles) == 0x1110 &&
        offsetof(PlaybackView, active) == 0x12d4 &&
        offsetof(PlaybackView, ready) == 0x12dc &&
        offsetof(PlaybackView, volume) == 0x12dd &&
        offsetof(PlaybackView, slot) == 0x1324 ? 1 : -1];
    PlaybackView *playback = reinterpret_cast<PlaybackView *>(&g_asdSoundSystem);
    AsdSndSlotA *slot = playback->slot;
    u8 success = 0;
    if (playback->ready && channel < 16 &&
        nw_snd_SoundArchive_IsAvailable(&g_asdSoundSystem) &&
        nw_snd_SoundArchive_GetSoundType(&g_asdSoundSystem, id) &&
        slot && !asd3dSoundActorIsPlaying(channel)) {
        u32 type = nw_snd_SoundArchive_GetSoundType(&g_asdSoundSystem, id);
        if (slot->hasHeap && type == 3) {
            if (!asdSoundEnsureArchiveItemLoaded(id)) {
                return 0;
            }
        } else if (type != 2) {
            return 0;
        }
        Actor *actor = &playback->actors[channel];
        success = FUN_0015e2bc(actor, &playback->handles[channel], id, 0) == 0;
        f32 volume;
        if (playback->volume == 0) {
            volume = 0.0f;
        } else {
            volume = ((f32)(u32)playback->volume - 64.0f) * 0.015748031f + 1.0f;
            if (volume > 1.0f) {
                volume = 1.0f;
            }
        }
        actor->volume = volume;
        if (success) {
            playback->active |= 1u << channel;
        }
    }
    return success;
}
}
