#include "common.h"

extern "C" {

extern u32 *g_eventTex;
extern u32 g_eventTexHandles[4];

extern s32 jobIsValid(u32 job);
extern void jobStop(u32 job, s32 arg);
extern void jobSetWork31(u32 job, s32 arg);
extern void FUN_00281178(u32 job);

/* Stops the event texture job and releases its four sub jobs. */
void eventTexReleaseJobs(void)
{
    s32 i;

    if (g_eventTex != NULL && jobIsValid(*g_eventTex) != 0) {
        for (i = 0; i < 4; i++) {
            if (jobIsValid(g_eventTexHandles[i]) != 0) {
                jobSetWork31(g_eventTexHandles[i], 0);
                FUN_00281178(g_eventTexHandles[i]);
            }
            g_eventTexHandles[i] = 0;
        }
        jobStop(*g_eventTex, 0);
    }
}

} /* extern "C" */
