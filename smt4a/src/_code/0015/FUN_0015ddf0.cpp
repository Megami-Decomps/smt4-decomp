#include "common.h"

extern "C" {

typedef struct Holder {
    u8 unk00[8];
    void *target; /* 0x08 */
} Holder;

extern void nw_snd_SoundHandle_DetachSound(void *sound);

/* Forwards to the function that follows it in the binary. */
void FUN_0015ddf0(Holder *holder)
{
    nw_snd_SoundHandle_DetachSound(holder->target);
}

} /* extern "C" */
