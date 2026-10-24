#include "common.h"

extern "C" {
struct LightEvent;
extern LightEvent g_appletSleepQueryEvent;
void nn_os_LightEvent_ClearSignal(LightEvent *event);
s32 FUN_0017169c(void);
}

extern "C" s32 FUN_00144a90(void)
{
    nn_os_LightEvent_ClearSignal(&g_appletSleepQueryEvent);
    return FUN_0017169c() != 0 ? 2 : 1;
}
