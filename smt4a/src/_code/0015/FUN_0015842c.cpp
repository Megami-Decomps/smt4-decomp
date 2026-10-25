/* NON_MATCHING: the svc 0x28 tick read matches through svcGetSystemTick; retail converts the tick count to a time with an inline multiply-by-reciprocal sequence (constants 0xbad34aee, 0xe353f7cf, 0x20c49ba5) that armcc does not generate for a 64-bit constant division here (it calls __aeabi_ldivmod), so the conversion below is the intended arithmetic only. */
#include "common.h"
#include "nn/svc.h"
#include "nn/os/TimedJob.h"


extern "C" {
void nn_os_CriticalSection_Enter(void *section);
void nn_os_CriticalSection_Leave(void *section);
void nn_os_LightEvent_Signal(void *event);
void svcSleepThread(u32 nanosecondsLow, u32 nanosecondsHigh);

/* Runs one step of the job's wait loop. Returns 1 after it has added the time since the start
 * to its counters, 0 when the job is finished or was never stopping. */
u32 FUN_0015842c(TimedJob *job)
{
    if (job->state == 6) {
        nn_os_CriticalSection_Enter(job->lock);
        job->state = 5;
        nn_os_CriticalSection_Leave(job->lock);
        nn_os_LightEvent_Signal(job->event);
        while (job->state != 3) {
            if (job->state == 7 || job->state == 1) {
                return 0;
            }
            svcSleepThread(500000, 0);
        }
        s64 now = svcGetSystemTick() * 1000000 / 268111856;
        s64 delta = now - job->startTime;
        job->elapsed += delta;
        job->elapsedTotal += delta;
        return 1;
    }
    return 0;
}

} /* extern "C" */
