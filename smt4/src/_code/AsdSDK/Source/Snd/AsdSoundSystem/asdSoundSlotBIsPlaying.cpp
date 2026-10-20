#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {
extern AsdSndSlotB *DAT_004e316c; /* the selected slot of the second kind */

/* Whether sound `index` of the selected second-kind slot is playing. */
u32 asdSoundSlotBIsPlaying(u32 index)
{
    u32 playing = 0;

    if (index < 8 && DAT_004e316c != NULL && DAT_004e316c->handles[index] != 0) {
        playing = 1;
    }
    return playing;
}

} /* extern "C" */
