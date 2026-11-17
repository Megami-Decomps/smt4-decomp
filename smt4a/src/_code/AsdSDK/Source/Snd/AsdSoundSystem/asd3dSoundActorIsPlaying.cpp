/* NON_MATCHING: retail uses `push {r4}` where armcc emits `mov r2, #0`. */
#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"

extern "C" {

/* Whether 3D sound actor `index` still plays; drops its playing bit once its handle is gone. */
u32 asd3dSoundActorIsPlaying(u32 index)
{
    AsdSnd3dStateA *sound3d = &g_asdSoundSystem.sound3d;
    u32 playing = 0;
    if (sound3d->enabled != 0 && index < 16) {
        u32 bit = 1u << index;
        if (sound3d->handles[index] == 0) {
            sound3d->playingMask &= ~bit;
        }
        if ((bit & sound3d->playingMask) != 0) {
            playing = 1;
        }
    }
    return playing;
}

} /* extern "C" */
