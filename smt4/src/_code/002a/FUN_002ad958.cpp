/* NON_MATCHING: countdown/zero saved registers and the high/low multiply intermediates differ. */
#include "nn/svc.h"

struct CountdownState {
    bool active;    // 0x00
    bool debug;     // 0x01
    u8 unk02[0x16]; // 0x02
    u32 remaining;  // 0x18
    u32 unk1C;      // 0x1C
};

extern "C" {
extern CountdownState g_titleContentFileSystem;
void threadSleepDuration(s64 nanoseconds);

static __inline s64 millisecondsToNanoseconds(s64 ms)
{
    return ms * 1000000;
}

// Sleeps for the countdown's remaining time in microseconds; in debug mode the delay is
// divided by a clock-derived factor.
void FUN_002ad958(s32 shortDelay)
{
    u32 reduction = 0;
    CountdownState *state = &g_titleContentFileSystem;
    u32 delay = shortDelay ? 100 : 380;
    if (state->active) {
        if (state->debug) {
            s32 tick = (s32)svcGetSystemTick();
            if ((tick & 0x10) != 0) {
                reduction = delay / ((tick & 0xF) + 1);
            }
        }
        u16 micros = state->remaining + reduction;
        if (micros != 0) {
            threadSleepDuration(millisecondsToNanoseconds(micros));
        }
    }
}
}
