#ifndef SOUND_AUXILIARYPLAYBACK_H
#define SOUND_AUXILIARYPLAYBACK_H
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

struct AuxiliarySoundParameters {
    u8 unk00[0xCC];
    f32 pan;
    f32 pitch;
};
extern "C" void FUN_0015e874(AuxiliarySoundParameters *sound, u32 frames, f32 volume);
struct AuxiliarySoundHandle {
    AuxiliarySoundParameters *sound;
    void setVolume(f32 volume, u32 frames) { if (sound) FUN_0015e874(sound, frames, volume); }
    void setPitch(f32 pitch) { if (sound) sound->pitch = pitch; }
    void setPan(f32 pan) { if (sound) sound->pan = pan; }
};
typedef char AuxiliarySoundHandleSizeCheck[offsetof(AuxiliarySoundHandle, sound) == 0 &&
    sizeof(AuxiliarySoundHandle) == 4 ? 1 : -1];
struct AuxiliarySoundSlots16 {
    u8 heap[0x20];
    AuxiliarySoundHandle handles[16];
};
// Apocalypse extends beyond the IV AsdSoundSystem prefix; keep this as a separate view.
struct AuxiliaryPlaybackSystemViewA {
    u8 unk0000[0x1318];
    AuxiliarySoundSlots16 *slots16;
};
typedef char AuxiliarySoundParameterOffsets[
    offsetof(AuxiliarySoundParameters, pan) == 0xCC &&
    offsetof(AuxiliarySoundParameters, pitch) == 0xD0 && sizeof(AuxiliarySoundParameters) == 0xD4 &&
    offsetof(AuxiliarySoundSlots16, handles) == 0x20 && sizeof(AuxiliarySoundSlots16) == 0x60 &&
    offsetof(AuxiliaryPlaybackSystemViewA, slots16) == 0x1318 ? 1 : -1];
#endif
