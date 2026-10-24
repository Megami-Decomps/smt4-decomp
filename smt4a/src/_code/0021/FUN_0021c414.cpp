#include "common.h"

extern "C" {

void bgmStop(s32 handle, u32 fadeFrames, s32 force);

/* Stops the current BGM, fading over the given number of frames. */
void FUN_0021c414(u32 fadeFrames)
{
    bgmStop(-1, fadeFrames, 1);
}

} /* extern "C" */
