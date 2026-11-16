/* NON_MATCHING: retail clears the bit through a separate absolute pool word (DAT_004e312c, the same address as
 * manager->playingMask) loaded before the handle test, keeps the handle in a saved r4 and reloads the mask after
 * the store; armcc treats the two as distinct objects and reuses the first load. */
#include "AsdSDK/Source/Snd/AsdSnd3dManagerScalars.h"

extern "C" {

extern AsdSnd3dScalarsView g_asdSound;
extern u32 DAT_004e312c;

/* Clears a finished actor's playing bit and reports whether 3D sound actor `index` is playing. */
u32 asd3dSoundActorIsPlaying(u32 index)
{
    u32 playing = 0;
    AsdSnd3dManagerScalars *manager = &g_asdSound.manager;
    if (manager->active != 0 && index < 16) {
        u32 bit = 1u << index;
        if (manager->handles[index] == 0)
            DAT_004e312c = manager->playingMask & ~bit;
        if ((manager->playingMask & bit) != 0)
            playing = 1;
    }
    return playing;
}

} /* extern "C" */
