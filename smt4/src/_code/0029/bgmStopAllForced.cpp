#include "common.h"

extern "C" {

void bgmStop(s32 id, u32 fadeFrames, s32 force);

/* Stops whatever BGM is playing, fading out over the given frames. */
void bgmStopAllForced(u32 fadeFrames)
{
    bgmStop(-1, fadeFrames, 1);
}

} /* extern "C" */
