#include "shard/W6_W6Match5_CommonBackground.h"

extern "C" {
s32 jobIsValid(u32);
void jobStop(u32, s32);

// Stop the background's active child job and enter its reset state.
void FUN_002e1ba8(void)
{
    CommonBackgroundState *background = g_commonBg.background;
    if (g_commonBg.child != NULL && jobIsValid(g_commonBg.child->job))
        jobStop(g_commonBg.child->job, 0);
    background->state = 4;
    background->progress = 0.0f;
    background->timer = 0;
}
}
