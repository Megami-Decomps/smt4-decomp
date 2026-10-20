#include "common.h"

extern "C" {

int nw_snd_SoundHandle_DetachSound(void);

u32 FUN_00376974(u32 handle)
{
    nw_snd_SoundHandle_DetachSound();
    return handle;
}

} /* extern "C" */
