#include "shard/W6_W6Match5_CommonBackground.h"

extern "C" {
s32 jobIsValid(u32 job);
void jobStop(u32 job, s32 mode);

// Stop the background's live child job and begin state five from zero progress.
void commonBgBeginExit(void)
{
    CommonBackgroundState *background = g_commonBg.background;
    if (g_commonBg.child != NULL && jobIsValid(g_commonBg.child->job) != 0) {
        jobStop(g_commonBg.child->job, 0);
    }
    background->state = 5;
    background->progress = 0.0f;
    background->timer = 0;
}
}
