#include "common.h"

extern "C" {

extern u32 *g_eventTex;
extern u32 g_eventTexHandles[4];

extern s32 jobIsValid(u32 job);
extern void jobStop(u32 job, s32 arg);
extern void FUN_0026e68c(u32 job, s32 arg);
extern void FUN_001dbba8(u32 job);

/* Stops the event texture job and releases its four sub jobs. */
void eventTexReleaseJobs(void)
{
    s32 i;

    if (g_eventTex != NULL && jobIsValid(*g_eventTex) != 0) {
        for (i = 0; i < 4; i++) {
            if (jobIsValid(g_eventTexHandles[i]) != 0) {
                FUN_0026e68c(g_eventTexHandles[i], 0);
                FUN_001dbba8(g_eventTexHandles[i]);
            }
            g_eventTexHandles[i] = 0;
        }
        jobStop(*g_eventTex, 0);
    }
}

} /* extern "C" */
