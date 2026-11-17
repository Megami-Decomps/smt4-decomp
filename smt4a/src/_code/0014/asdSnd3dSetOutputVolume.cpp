#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"

extern "C" {
void asdSnd3dObjectSetOutputVolume(u8 *listener, f32 level);

/* Stores the output volume and forwards it to the listener while 3D sound is up. */
void asdSnd3dSetOutputVolume(f32 level)
{
    AsdSnd3dStateA *sound3d = &g_asdSoundSystem.sound3d;
    if (sound3d->enabled != 0) {
        sound3d->outputVolume = level;
        asdSnd3dObjectSetOutputVolume(sound3d->listener, level);
    }
}
}
