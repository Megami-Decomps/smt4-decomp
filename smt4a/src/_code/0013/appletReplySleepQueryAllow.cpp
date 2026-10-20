#include "common.h"

extern "C" {

void nn_os_LightEvent_Wait(u8 *object);
void nn_applet_CTR_ReplySleepQuery(s32 reply);
extern u8 g_appletSleepQueryEvent[];

/* Replies to the sleep query with 1 (allow), then calls nn_os_LightEvent_Wait on the object at 0x5B4090. */
void appletReplySleepQueryAllow(void)
{
    nn_applet_CTR_ReplySleepQuery(1);
    nn_os_LightEvent_Wait(g_appletSleepQueryEvent);
}

} /* extern "C" */
