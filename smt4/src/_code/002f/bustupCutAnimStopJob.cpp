#include "event/bustupEvent/BustupCutAnim.h"

extern "C" {

void jobStop(u32 job, s32 arg);
s32 jobIsValid(u32 job);

extern BustupCutAnim *g_bustupCutAnim;

void bustupCutAnimStopJob(void)
{
    if (g_bustupCutAnim != NULL && jobIsValid(g_bustupCutAnim->job) != 0) {
        jobStop(g_bustupCutAnim->job, 0);
    }
}

} /* extern "C" */
