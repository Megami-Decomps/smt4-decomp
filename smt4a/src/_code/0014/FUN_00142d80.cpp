#include "common.h"

extern "C" {

struct LightEvent;
extern LightEvent g_appletSleepQueryEvent;
void nn_os_LightEvent_Signal(LightEvent *event);
/* Signals the applet sleep-query event. */
void FUN_00142d80(void)
{
    nn_os_LightEvent_Signal(&g_appletSleepQueryEvent);
}

} /* extern "C" */
