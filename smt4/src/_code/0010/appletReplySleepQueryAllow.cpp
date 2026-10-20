#include "common.h"

extern "C" {

int nn_os_LightEvent_Wait(u32 *event);
int nn_applet_CTR_ReplySleepQuery(int reply);

extern u32 g_appletSleepQueryEvent;

void appletReplySleepQueryAllow(void)
{
    nn_applet_CTR_ReplySleepQuery(1);
    nn_os_LightEvent_Wait(&g_appletSleepQueryEvent);
}

} /* extern "C" */
