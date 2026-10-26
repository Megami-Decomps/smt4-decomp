/* NON_MATCHING: control flow now matches retail (level test, then summary and description); the build copies the request into r4 (retail r5), keeps -32 and the description constant in extra registers, and folds the description mask into one shifted compare where retail extracts it with lsl/lsr. */
#include "common.h"

extern "C" {

extern u32 DAT_00471ba4;
extern u32 DAT_00471b90;

s32 FUN_001383a8(u32* state, u32 request);
s32 FUN_001295ec(void);
void threadSleepDuration(s64 nanoseconds);

// Retry the transient status, then finalize non-failing requests and count them.
s32 FUN_0011ce28(u32 request)
{
    for (;;) {
        s32 result = FUN_001383a8(&DAT_00471ba4, request);
        const u32 status = static_cast<u32>(result);
        s32 level;
        if (status & 0x80000000u) {
            level = static_cast<s32>(status >> 27) - 32;
        } else {
            level = static_cast<s32>(status >> 27);
        }

        if (level == -5) {
            u32 summary = (status & 0x07e00000u) >> 21;
            if (summary == 4 && (status & 0x3ffu) == 0x3fa) {
                threadSleepDuration(500000LL);
                continue;
            }
        }
        if ((status & 0x80000000u) == 0) {
            result = FUN_001295ec();
            ++DAT_00471b90;
        }
        return result;
    }
}

} // extern "C"
