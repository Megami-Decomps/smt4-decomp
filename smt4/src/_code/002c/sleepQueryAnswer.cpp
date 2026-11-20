#include "nn/applet/SleepQuery.h"

extern "C" {

extern u8 g_appletSleepModuleState; /* 0x44e3b0 */

/* Clears the sleep-pending flag; when asked to, rejects the pending sleep query. */
void sleepQueryAnswer(s32 answer)
{
    g_appletSleepModuleState = 0;
    if (answer != 0) {
        appletReplySleepQuery(SLEEP_QUERY_REPLY_REJECT);
    }
}

} /* extern "C" */
