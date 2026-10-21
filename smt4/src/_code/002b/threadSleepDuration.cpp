/* NON_MATCHING: compiler lowers the 64-bit cycle multiplication with MLA and saves registers, unlike retail UMULL/ADDS. */
#include "common.h"
extern "C" {
void FUN_001383c0(s64 duration);
void FUN_00138398(u32 cycles);
void threadSleepDuration(s64 duration)
{
    if (duration >= 0x3477) {
        FUN_001383c0(duration);
    } else {
        u32 cycles = ((u64)duration * 0x44a2fa85) >> 32;
        FUN_00138398(cycles);
    }
}
}
