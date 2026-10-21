/* NON_MATCHING: the failure test on the result: retail computes `ands r1,r0,#0x80000000` (flags only, r1 unused) and branches with bpl; the build emits tst/beq */
#include "common.h"

extern "C" {

typedef struct State0035782c {
    /* 0x0 */ u8 unk0;
    /* 0x1 */ u8 initialized;
    /* 0x2 */ u8 started;
} State0035782c;

void nn_os_CriticalSection_Enter(void *section);
void nn_os_CriticalSection_Leave(void *section);
s32 FUN_0035ae94(s32 value);
void threadSleepDuration(s32 value, s32 flags);

extern State0035782c DAT_004656ca; /* 0x4656ca */
extern u8 DAT_004e629c[];          /* 0x4e629c: critical section */

/* Starts the module once (16000000), under its critical section. Returns 0xc8a10bf0 when it was not initialised, or the failure from FUN_0035ae94. */
s32 moduleStartOnce(void)
{
    s32 result = 0;
    u8 *section;

    if (DAT_004656ca.initialized == 0) {
        result = (s32)0xc8a10bf0;
    } else if (DAT_004656ca.started == 0) {
        section = DAT_004e629c;
        nn_os_CriticalSection_Enter(section);
        result = FUN_0035ae94(0);
        if ((result & 0x80000000) != 0) {
            nn_os_CriticalSection_Leave(section);
            return result;
        }
        threadSleepDuration(16000000, 0);
        DAT_004656ca.started = 1;
        nn_os_CriticalSection_Leave(section);
    }
    return result;
}

} /* extern "C" */
