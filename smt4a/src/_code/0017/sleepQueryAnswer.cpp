#include "nn/applet/SleepQuery.h"

extern "C" {

extern u8 DAT_005891f4;

/* Clears the sleep-pending flag; when `reply` is set, also rejects the pending sleep query. */
void sleepQueryAnswer(s32 reply)
{
    DAT_005891f4 = 0;
    if (reply != 0) {
        appletReplySleepQuery(SLEEP_QUERY_REPLY_REJECT);
    }
}

} /* extern "C" */
