/* NON_MATCHING: the success mask uses r0 after saving the result in r4; retail masks into r1 before preserving the result. */
#include "nn/Result.h"

extern "C" {

typedef struct State0042d6a8 {
    /* 0x0 */ u8 unk0;
    /* 0x1 */ u8 initialized;
    /* 0x2 */ u8 started;
} State0042d6a8;

void nn_os_CriticalSection_Enter(void *section);
void nn_os_CriticalSection_Leave(void *section);
s32 svcRequestChannelByIndex(s32 value);
void svcSleepThread(s32 value, s32 flags);

extern State0042d6a8 DAT_005b4486; /* 0x5b4486 */
extern u8 g_moduleCriticalSection6[];          /* 0x6426b4: critical section */

/* Starts the module once (16000000), under its critical section. Returns 0xc8a10bf0 when it was not initialised, or the failure from svcRequestChannelByIndex. */
s32 moduleStartOnce(void)
{
    s32 result = 0;
    u8 *section;

    if (DAT_005b4486.initialized == 0) {
        result = (s32)0xc8a10bf0;
    } else if (DAT_005b4486.started == 0) {
        section = g_moduleCriticalSection6;
        nn_os_CriticalSection_Enter(section);
        result = svcRequestChannelByIndex(0);
        if (!nnResultIsSuccess(result)) {
            nn_os_CriticalSection_Leave(section);
            return result;
        }
        svcSleepThread(16000000, 0);
        DAT_005b4486.started = 1;
        nn_os_CriticalSection_Leave(section);
    }
    return result;
}

} /* extern "C" */
