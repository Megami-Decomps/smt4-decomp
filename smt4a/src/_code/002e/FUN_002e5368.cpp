#include "event/2dEvent/2dEventTex.h"

extern "C" {

void jobSetIntensity(u32 job, s32 flag);
void jobBlendSetRate(u32 job, s32 flag);
s32 jobIsValid(u32 job);
s32 jobGetStatus(u32 job);

extern EventTexA *g_eventTex;

/* Resumes the active texture jobs and all sixteen texture handles. */
u32 FUN_002e5368(void)
{
    s32 valid;
    s32 i;
    EventTexA *jobs;

    jobs = g_eventTex;
    if (jobs != NULL) {
        i = 0;
        if (i < jobs->count) {
            do {
                valid = jobIsValid(jobs->slots[i]);
                if ((valid != 0) && (valid = jobGetStatus(jobs->slots[i]), valid != 4)) {
                    jobSetIntensity(jobs->slots[i], 0);
                }
                i = i + 1;
            } while (i < jobs->count);
        }
        i = 0;
        do {
            valid = jobIsValid(jobs->handles[i]);
            if (valid != 0) {
                jobBlendSetRate(jobs->handles[i], 0);
            }
            i = i + 1;
        } while (i < 0x10);
    }
    return 1;
}

} /* extern "C" */
