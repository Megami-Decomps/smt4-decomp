/* NON_MATCHING: the pitch/pan arguments are copied as one double (retail copies them singly into s17/s16), the null-slot return value is -1 directly (retail returns the index variable) and the first g_asdSound call uses a separate literal in retail. */
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "code/Code002b.h"

/* The native BasicSound scalar controls are not described by the archive slot prefix. */
struct BasicSoundControlView {
    u8 unk00[0xb4];
    f32 pan;
    f32 pitch;
};

extern "C" {
extern AsdSoundSystem g_asdSound;
s32 FUN_00141fd0(AsdSoundSystem *sound, u32 soundId);
bool asdSndEnsureCurrentSlotData(u32 soundId);
u32 nw_snd_SoundStartable_StartSound(void *player, s32 *handle, u32 soundId, const void *info);
void nw_snd_internal_BasicSound_SetVolume(BasicSoundControlView *sound, s32 fadeFrames, f32 volume);

s32 FUN_0012655c(u32 soundId, u32 level, s32 fadeFrames, f32 pitch, f32 pan)
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
        return -1;
    if (!FUN_002bf684(sound) || !FUN_00141fd0(sound, soundId))
        return index;
    if (!asdSndEnsureCurrentSlotData(soundId))
        return -1;
    s32 *handle = &slot->handles[index];
    bool started = (u8)nw_snd_SoundStartable_StartSound(sound->player, handle, soundId, 0) == 0;
    union { f32 value; s32 bits; } volume;
    volume.value = 0.0f;
    if (level) {
        volume.value = 1.0f + ((f32)level - 64.0f) * (1.0f / 63.5f);
        if (volume.bits > 0x40000000)
            volume.value = 2.0f;
    }
    if (*handle)
        nw_snd_internal_BasicSound_SetVolume((BasicSoundControlView *)*handle, 0, 0.0f);
    if (*handle)
        ((BasicSoundControlView *)*handle)->pitch = 1.0f;
    if (*handle)
        ((BasicSoundControlView *)*handle)->pan = 0.0f;
    if (*handle)
        nw_snd_internal_BasicSound_SetVolume((BasicSoundControlView *)*handle, fadeFrames, volume.value);
    if (*handle)
        ((BasicSoundControlView *)*handle)->pitch = pitch;
    if (*handle)
        ((BasicSoundControlView *)*handle)->pan = pan;
    return started ? index : -1;
}
}
