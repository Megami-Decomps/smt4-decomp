/* NON_MATCHING: retail predicates the volume clamp in r1 and sets the ramp argument before testing the sound pointer; this source uses a clamp branch and a later ramp move. */
#include "common.h"

struct SoundVolumeOwner {
    void *sound; // 0x00
    u8 unk04[9];
    u8 volume; // 0x0d
};
struct SoundVolumeGlobals {
    u8 unk00[0x1210];
    SoundVolumeOwner *owners[2]; // 0x1210
};
extern "C" SoundVolumeGlobals g_asdSound;
extern "C" void nw_snd_internal_BasicSound_SetVolume(void *sound, s32 frames, f32 volume);

// Set either active sound slot's normalized volume with an optional ramp.
extern "C" void audioApplyChannelVolume(u32 slot, u32 value, s32 frames)
{
    if (slot == 0 || slot == 1) {
        SoundVolumeOwner *owner = g_asdSound.owners[slot];
        if (owner) {
            owner->volume = value;
            if (value > 127) {
                value = 127;
                owner->volume = value;
            }
            f32 volume;
            if (value == 0)
                volume = 0.0f;
            else {
                volume = 1.0f + (static_cast<u8>(value) - 64.0f) * (2.0f / 127.0f);
                if (volume > 2.0f)
                    volume = 2.0f;
            }
            if (owner->sound)
                nw_snd_internal_BasicSound_SetVolume(owner->sound, frames, volume);
        }
    }
}
