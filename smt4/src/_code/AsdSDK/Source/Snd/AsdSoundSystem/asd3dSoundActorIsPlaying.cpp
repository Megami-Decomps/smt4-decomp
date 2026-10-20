#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern u32 DAT_004e2f68[16]; /* per-3D-actor sound handles */
extern u32 DAT_004e312c;     /* bit i: 3D actor i is playing */
extern s8 DAT_004e3134;      /* 3D sound is enabled */

/* Whether 3D actor `index` is playing; actors whose handle has gone are cleared from the mask. */
u32 asd3dSoundActorIsPlaying(u32 index)
{
    u32 playing = 0;
    u32 bit;

    if (DAT_004e3134 != 0 && index < 16) {
        bit = 1 << (index & 0xff);
        if (DAT_004e2f68[index] == 0) {
            DAT_004e312c &= ~bit;
        }
        if ((bit & DAT_004e312c) != 0) {
            playing = 1;
        }
    }
    return playing;
}

} /* extern "C" */
