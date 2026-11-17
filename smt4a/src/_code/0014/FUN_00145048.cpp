#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"

extern "C" {
void FUN_0015e2fc(u8 *listener, f32 volume);

/* Stores the volume and forwards it to the listener while 3D sound is up. */
void FUN_00145048(f32 volume)
{
    AsdSnd3dStateA *sound3d = &g_asdSoundSystem.sound3d;
    if (sound3d->enabled != 0) {
        sound3d->unkA7C = volume;
        FUN_0015e2fc(sound3d->listener, volume);
    }
}
}
