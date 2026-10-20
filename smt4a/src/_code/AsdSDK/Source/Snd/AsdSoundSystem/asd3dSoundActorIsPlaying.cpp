#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern u32 DAT_0063f2f8[16]; /* per-3D-actor sound handles */
extern u32 DAT_0063f4bc;     /* bit i: 3D actor i is playing */
extern s8 DAT_0063f4c4;      /* 3D sound is enabled */

/* Whether 3D actor `index` is playing; actors whose handle has gone are cleared from the mask. */
u32 asd3dSoundActorIsPlaying(u32 index)
{
    u32 playing = 0;
    u32 bit;

    if (DAT_0063f4c4 != 0 && index < 16) {
        bit = 1 << (index & 0xff);
        if (DAT_0063f2f8[index] == 0) {
            DAT_0063f4bc &= ~bit;
        }
        if ((bit & DAT_0063f4bc) != 0) {
            playing = 1;
        }
    }
    return playing;
}

} /* extern "C" */
