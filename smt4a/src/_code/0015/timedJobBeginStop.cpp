/* NON_MATCHING: the tick conversion's multiplies match; armcc reloads the 0xbad34aee constant instead of keeping it
 * in r2 (so the products take other registers), and retail keeps the new state 6 in r5 across the lock's Enter. */
#include "nn/os/TimedJob.h"
#include "nn/svc.h"
#include "shard/W6_W6Match1_CriticalSection.h"

extern "C" {
s64 FUN_001780a4(const s64 *value, s64 reciprocal, u32 shift);
}

/* Multiply the signed tick count by the SDK's fixed-point nanoseconds-per-tick ratio (3 + 0xbad34aee / 2^32),
 * keeping the middle 64 bits of the 128-bit product. */
static __inline s64 ticksToNanoseconds(s64 ticks)
{
    s32 high = (s32)(ticks >> 32);
    u32 low = (u32)ticks;
    u64 lolo = (u64)low * 0xbad34aeeU;
    s64 hilo = (s64)high * 0xbad34aeeU;
    u64 lohi = (u64)low * 3;
    u64 hihi = (u64)(u32)high * 3;
    return ((lolo >> 32) + (hihi << 32)) + (hilo + lohi);
}

/* Begin stopping a running timed job, recording the start of its measured interval. */
extern "C" u32 timedJobBeginStop(TimedJob *job)
{
    if (job->state == 6) {
        return 1;
    }
    if (job->state != 3) {
        return 0;
    }
    s64 nanoseconds = ticksToNanoseconds(nn::svc::GetSystemTick());
    job->startTime = FUN_001780a4(&nanoseconds, 0x20c49ba5e353f7cfLL, 7);
    ScopedCriticalLock lock(job->lock);
    job->state = 6;
    return 1;
}
