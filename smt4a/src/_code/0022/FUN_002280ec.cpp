#include "event/2dEvent/2dEventTex.h"

extern "C" {

void jobSetIntensity(u32 job, s32 flag);
void jobBlendSetRate(u32 job, s32 flag);
void messageMainSetMode(s32 mode);
s32 jobIsValid(u32 job);
s32 jobGetStatus(u32 job);

extern EventTexA *g_eventTex;

/* Stops the scene's active jobs and handles, then enters message mode 2. */
u32 FUN_002280ec(void)
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
                    jobSetIntensity(jobs->slots[i], 1);
                }
                i = i + 1;
            } while (i < jobs->count);
        }
        i = 0;
        do {
            valid = jobIsValid(jobs->handles[i]);
            if (valid != 0) {
                jobBlendSetRate(jobs->handles[i], 1);
            }
            i = i + 1;
        } while (i < 0x10);
    }
    messageMainSetMode(2);
    return 1;
}

} /* extern "C" */
