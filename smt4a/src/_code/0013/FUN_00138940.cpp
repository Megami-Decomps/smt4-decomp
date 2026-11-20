/* NON_MATCHING: The success result is initialized later, changing the registers used for the two event-state stores. */
#include "nn/applet/EventState.h"

extern "C" {
extern AppletEventState g_appletEventState;
extern u32 g_appletSleepQueryEvent[2];
extern u32 g_appletHomeButtonEvent[2];
extern u32 g_nnAppletCriticalSection[2];
void nn_os_LightEvent_Initialize(u32 *event, u8 resetType);
void nn_os_LightEvent_Signal(u32 *event);
void nn_os_CriticalSection_Initialize(u32 *section);
void sleepAllow(void);
void FUN_00147328(void (*callback)(void), u32 userData);
void FUN_00147314(void (*callback)(void), u32 userData);
void FUN_00144a90(void);
void appletSleepQuerySignal(void);
void FUN_00147ad8(s32 enabled);
s32 appletIsExitRequested(void);
s32 FUN_0015a410(void);

/* Initializes and signals the applet events, installs callbacks, and reports whether startup may continue. */
u32 FUN_00138940(void)
{
    nn_os_LightEvent_Initialize(g_appletSleepQueryEvent, 0);
    nn_os_LightEvent_Initialize(g_appletHomeButtonEvent, 0);
    nn_os_CriticalSection_Initialize(g_nnAppletCriticalSection);
    g_appletEventState.initialized = 1;
    sleepAllow();
    g_appletEventState.enabled = 1;
    nn_os_LightEvent_Signal(g_appletEventState.sleepQueryEvent);
    nn_os_LightEvent_Signal(g_appletEventState.homeButtonEvent);
    FUN_00147328(FUN_00144a90, 0);
    FUN_00147314(appletSleepQuerySignal, 0);
    FUN_00147ad8(1);
    u32 result = 1;
    if (appletIsExitRequested() || FUN_0015a410()) {
        result = 0;
    }
    return result;
}
}
