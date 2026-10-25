/* NON_MATCHING: recovered tick arithmetic is scheduled differently and the repeated state load is merged. */
#include "nn/os/TimedJob.h"
#include "nn/svc.h"

extern "C" {
s64 FUN_001780a4(const s64 *value, s64 reciprocal, u32 shift);
void nn_os_CriticalSection_Enter(void *section);
void nn_os_CriticalSection_Leave(void *section);
}

/* Multiply the signed tick count by the SDK's fixed-point nanoseconds-per-tick ratio. */
static __inline s64 ticksToNanoseconds(s64 ticks)
{
    u32 low = (u32)ticks;
    s64 high = ticks >> 32;
    return high * 0xbad34aeeLL + (s64)(((u64)low * 0xbad34aeeULL) >> 32) + ticks * 3;
}

/* Begin stopping a running timed job, recording the start of its measured interval. */
extern "C" u32 FUN_0015836c(TimedJob *job)
{
    if (job->state == 6) {
        return 1;
    }
    if (job->state != 3) {
        return 0;
    }
    s64 nanoseconds = ticksToNanoseconds(nn::svc::GetSystemTick());
    job->startTime = FUN_001780a4(&nanoseconds, 0x20c49ba5e353f7cfLL, 7);
    nn_os_CriticalSection_Enter(job->lock);
    job->state = 6;
    nn_os_CriticalSection_Leave(job->lock);
    return 1;
}
