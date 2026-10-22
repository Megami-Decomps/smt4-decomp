/* NON_MATCHING: The success result is initialized later, changing the registers used for the two event-state stores. */
#include "nn/applet/EventState.h"

extern "C" {
extern AppletEventState DAT_005b408c;
extern u32 g_appletSleepQueryEvent[2];
extern u32 g_appletHomeButtonEvent[2];
extern u32 g_nnAppletCriticalSection[2];
void nn_os_LightEvent_Initialize(u32 *event, u8 resetType);
void nn_os_LightEvent_Signal(u32 *event);
void nn_os_CriticalSection_Initialize(u32 *section);
void FUN_00170390(void);
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
    DAT_005b408c.initialized = 1;
    FUN_00170390();
    DAT_005b408c.enabled = 1;
    nn_os_LightEvent_Signal(DAT_005b408c.sleepQueryEvent);
    nn_os_LightEvent_Signal(DAT_005b408c.homeButtonEvent);
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
