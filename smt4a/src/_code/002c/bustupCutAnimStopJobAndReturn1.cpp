#include "event/bustupEvent/BustupCutAnim.h"

extern "C" {

void jobStop(u32 job, s32 arg);
s32 jobIsValid(u32 job);

extern BustupCutAnimA *g_bustupCutAnim;

s32 bustupCutAnimStopJobAndReturn1(void)
{
    if (g_bustupCutAnim != NULL && jobIsValid(g_bustupCutAnim->job) != 0) {
        jobStop(g_bustupCutAnim->job, 0);
    }
    return 1;
}

} /* extern "C" */
