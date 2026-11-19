/* NON_MATCHING: the code is identical; only the store's pool word differs by name: retail's reads DAT_004e312c,
 * the address of g_asdSound.manager.playingMask, because symbols.txt gives g_asdSound no size. */
#include "AsdSDK/Source/Snd/AsdSnd3dManagerScalars.h"

extern "C" {

extern AsdSnd3dScalarsView g_asdSound;

/* Clears a finished actor's playing bit and reports whether 3D sound actor `index` is playing. */
u32 asd3dSoundActorIsPlaying(u32 index)
{
    AsdSnd3dManagerScalars *manager = &g_asdSound.manager;
    u32 playing = 0;
    if (manager->active != 0 && index < 16) {
        if (manager->handles[index] == 0) {
            manager->playingMask &= ~(1u << index);
        }
        if ((manager->playingMask & (1u << index)) != 0) {
            playing = 1;
        }
    }
    return playing;
}

} /* extern "C" */
