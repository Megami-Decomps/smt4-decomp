#include "common.h"

extern "C" {
void svcSleepThread(s64 duration);
void FUN_00138398(s32 cycles);
}

enum {
    THREAD_SLEEP_MIN_NANOSECONDS = 0x3477,
    THREAD_SLEEP_CYCLE_SCALE_Q32 = 0x44a2fa85
};

/* Sleeps for a duration in nanoseconds, spinning instead for very short delays. */
extern "C" void threadSleepDuration(s64 duration)
{
    if (duration >= THREAD_SLEEP_MIN_NANOSECONDS) {
        svcSleepThread(duration);
    } else {
        /* Scale the two 32-bit limbs and keep the low word of the shifted product. */
        const u64 fractionalCycles = ((u64)(u32)duration * THREAD_SLEEP_CYCLE_SCALE_Q32) >> 32;
        const u32 wholeCycles = (u32)((u64)(u32)((u64)duration >> 32) * THREAD_SLEEP_CYCLE_SCALE_Q32);
        const u32 cycles = fractionalCycles + wholeCycles;
        FUN_00138398((s32)cycles);
    }
}
