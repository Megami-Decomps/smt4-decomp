#include "nn/applet/SleepQuery.h"

extern "C" {

int nn_os_LightEvent_Wait(u32 *event);

extern u32 g_appletSleepQueryEvent;

void appletReplySleepQueryAllow(void)
{
    nn_applet_CTR_ReplySleepQuery(SLEEP_QUERY_REPLY_ACCEPT);
    nn_os_LightEvent_Wait(&g_appletSleepQueryEvent);
}

} /* extern "C" */
