/* NON_MATCHING: the free-handle search keeps the index in r0 and copies it to r5 (retail searches in r5 and loads
 * -1 into r2 for the not-found exit), and BasicSound's SetPitch/SetPan stay calls: retail has armlink's inlined
 * vstrne s0, [r0, #0xb8] / [r0, #0xb4] (inlined.txt rows proposed: 0xed800a2e at 0x126688/0x1266bc,
 * 0xed800a2d at 0x126698/0x1266cc). */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "code/Code002b.h"
#include "AsdSDK/Source/Snd/AsdSoundVolume.h"

extern "C" {
extern AsdSoundSystem g_asdSound;
u32 nw_snd_SoundArchive_GetSoundType(void *archive, s32 id);
bool asdSndEnsureCurrentSlotData(u32 soundId);
u32 nw_snd_SoundStartable_StartSound(void *player, s32 *handle, s32 id, u32 flags);

/* Whether the sound archive is open and has a sound `id`. */
static __inline bool asdSndSoundExists(s32 id)
{
    AsdSoundSystem *sound = &g_asdSound;
    return nw_snd_SoundArchive_IsAvailable(sound) && nw_snd_SoundArchive_GetSoundType(sound, id) != 0;
}

/* Plays sound `id` in the current B slot's first free handle at `volume` (0-127, 64 = unity) faded in over
 * `fadeFrames`, with its pitch and pan. Returns the handle index, or -1 when the sound did not start. */
s32 asdSndPlaySlotB(s32 id, u32 volume, s32 fadeFrames, f32 pitch, f32 pan)
{
    AsdSoundSystem *sound = &g_asdSound;
    AsdSndSlotB *slot = g_asdSound.currentSlotB;
    if (!slot)
        return -1;
    s32 index = -1;
    for (s32 i = 0; i < 8; ++i) {
        if (!slot->handles[i]) {
            index = i;
            break;
        }
    }
    if (index == -1)
        return index;
    if (!asdSndSoundExists(id))
        return index;
    if (!asdSndEnsureCurrentSlotData(id))
        return -1;
    bool success = (u8)nw_snd_SoundStartable_StartSound(sound->player, &slot->handles[index], id, 0) == 0;
    f32 gain;
    if (volume) {
        gain = ((f32)volume - 64.0f) * 0.015748031f + 1.0f;
        if (gain > 2.0f) {
            gain = 2.0f;
        }
    } else {
        gain = 0.0f;
    }
    asdSoundHandleSetVolume(slot->handles[index], 0, 0.0f);
    asdSoundHandleSetPitch(slot->handles[index], 1.0f);
    asdSoundHandleSetPan(slot->handles[index], 0.0f);
    asdSoundHandleSetVolume(slot->handles[index], fadeFrames, gain);
    asdSoundHandleSetPitch(slot->handles[index], pitch);
    asdSoundHandleSetPan(slot->handles[index], pan);
    if (!success) {
        index = -1;
    }
    return index;
}
}
