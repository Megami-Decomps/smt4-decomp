/* NON_MATCHING: the code is identical; only the store's pool word differs by name: retail's reads DAT_0063f4bc,
 * the address of g_asdSoundSystem.sound3d.playingMask, because symbols.txt gives g_asdSoundSystem no size. */
#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"

extern "C" {

/* Whether 3D sound actor `index` still plays; drops its playing bit once its handle is gone. */
u32 asd3dSoundActorIsPlaying(u32 index)
{
    AsdSnd3dStateA *sound3d = &g_asdSoundSystem.sound3d;
    u32 playing = 0;
    if (sound3d->enabled != 0 && index < 16) {
        if (sound3d->handles[index] == 0) {
            sound3d->playingMask &= ~(1u << index);
        }
        if ((sound3d->playingMask & (1u << index)) != 0) {
            playing = 1;
        }
    }
    return playing;
}

} /* extern "C" */
