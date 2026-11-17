#ifndef SOUND_AUXILIARYPLAYBACK_H
#define SOUND_AUXILIARYPLAYBACK_H
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

struct AuxiliarySoundParameters {
    u8 unk00[0xCC];
    f32 pan;
    f32 pitch;
};
extern "C" void FUN_0015e874(AuxiliarySoundParameters *sound, u32 frames, f32 volume);
/* An nw::snd::SoundHandle as the slot players drive it (a slot's handle word). */
struct AuxiliarySoundHandle {
    AuxiliarySoundParameters *sound;
    void setVolume(f32 volume, u32 frames) { if (sound) FUN_0015e874(sound, frames, volume); }
    void setPitch(f32 pitch) { if (sound) sound->pitch = pitch; }
    void setPan(f32 pan) { if (sound) sound->pan = pan; }
};
typedef char AuxiliarySoundHandleSizeCheck[offsetof(AuxiliarySoundHandle, sound) == 0 &&
    sizeof(AuxiliarySoundHandle) == 4 ? 1 : -1];
typedef char AuxiliarySoundParameterOffsets[
    offsetof(AuxiliarySoundParameters, pan) == 0xCC &&
    offsetof(AuxiliarySoundParameters, pitch) == 0xD0 && sizeof(AuxiliarySoundParameters) == 0xD4 ? 1 : -1];
#endif
