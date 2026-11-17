#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"

extern "C" {
void FUN_0015e30c(u8 *listener, f32 value);

/* Stores the value and forwards it to the listener while 3D sound is up. */
void FUN_00144564(f32 value)
{
    AsdSnd3dStateA *sound3d = &g_asdSoundSystem.sound3d;
    if (sound3d->enabled != 0) {
        sound3d->unkA74 = value;
        FUN_0015e30c(sound3d->listener, value);
    }
}
}
