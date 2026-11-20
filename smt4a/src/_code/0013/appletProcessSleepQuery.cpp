#include "nn/applet/SleepQuery.h"

extern "C" {
u8 appletIsSleepQueried(void);
u8 nn_os_CriticalSection_TryEnter(void *section);
extern s8 g_appletEventState; /* sleep mode is allowed (sleepModeSetEnabled) */
extern u8 g_nnAppletCriticalSection[];

/* Answers a pending sleep query: 0 when there is none, 1 when sleep is not allowed and the query was
 * rejected (reply 0), 2 when sleep is allowed and the applet lock was taken. */
u32 appletProcessSleepQuery(void)
{
    u32 result = 0;
    if (appletIsSleepQueried()) {
        if (g_appletEventState == 0) {
            nn_applet_CTR_ReplySleepQuery(SLEEP_QUERY_REPLY_REJECT);
            result = 1;
        } else if (nn_os_CriticalSection_TryEnter(g_nnAppletCriticalSection)) {
            result = 2;
        }
    }
    return result;
}

} /* extern "C" */
