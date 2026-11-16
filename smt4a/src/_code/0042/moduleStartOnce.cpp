#include "nn/Result.h"

extern "C" {

typedef struct State0042d6a8 {
    /* 0x0 */ u8 unk0;
    /* 0x1 */ u8 initialized;
    /* 0x2 */ u8 started;
} State0042d6a8;

void nn_os_CriticalSection_Enter(void *section);
void nn_os_CriticalSection_Leave(void *section);
nn::Result svcRequestChannelByIndex(s32 value);
void svcSleepThread(s32 value, s32 flags);

extern State0042d6a8 g_cecState; /* 0x5b4486 */
extern u8 g_moduleCriticalSection6[];          /* 0x6426b4: critical section */

/* Starts the module once (16000000), under its critical section. Returns 0xc8a10bf0 when it was not initialised, or the failure from svcRequestChannelByIndex. */
s32 moduleStartOnce(void)
{
    s32 result = 0;
    u8 *section;

    if (g_cecState.initialized == 0) {
        result = (s32)0xc8a10bf0;
    } else if (g_cecState.started == 0) {
        section = g_moduleCriticalSection6;
        nn_os_CriticalSection_Enter(section);
        nn::Result channel = svcRequestChannelByIndex(0);
        result = channel;
        if (!nnResultIsSuccess(channel)) {
            nn_os_CriticalSection_Leave(section);
            return result;
        }
        svcSleepThread(16000000, 0);
        g_cecState.started = 1;
        nn_os_CriticalSection_Leave(section);
    }
    return result;
}

} /* extern "C" */
