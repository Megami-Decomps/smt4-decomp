#include "common.h"

extern "C" {
struct LightEvent;
extern LightEvent g_appletSleepQueryEvent;
void nn_os_LightEvent_ClearSignal(LightEvent *event);
s32 FUN_002bc7e4(void);
}

extern "C" s32 FUN_0010e924(void)
{
    nn_os_LightEvent_ClearSignal(&g_appletSleepQueryEvent);
    return FUN_002bc7e4() != 0 ? 2 : 1;
}
