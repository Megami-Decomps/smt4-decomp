/* NON_MATCHING: The success result is initialized later, changing the registers used for the two event-state stores. */
#include "nn/applet/EventState.h"

extern "C" {
extern AppletEventState DAT_00465198;
extern u32 g_appletSleepQueryEvent[2];
extern u32 g_appletHomeButtonEvent[2];
extern u32 g_nnAppletCriticalSection[2];
void nn_os_LightEvent_Initialize(u32 *event, u8 resetType);
void nn_os_LightEvent_Signal(u32 *event);
void nn_os_CriticalSection_Initialize(u32 *section);
void FUN_002c5434(void);
void FUN_00110124(void (*callback)(void), u32 userData);
void FUN_00110110(void (*callback)(void), u32 userData);
void FUN_0010e924(void);
void appletSignalSleepQuery(void);
void FUN_00110838(s32 enabled);
s32 appletIsExitRequested(void);
s32 FUN_002c55b4(void);

/* Initializes and signals the applet events, installs callbacks, and reports whether startup may continue. */
u32 FUN_00103ec8(void)
{
    nn_os_LightEvent_Initialize(g_appletSleepQueryEvent, 0);
    nn_os_LightEvent_Initialize(g_appletHomeButtonEvent, 0);
    nn_os_CriticalSection_Initialize(g_nnAppletCriticalSection);
    DAT_00465198.initialized = 1;
    FUN_002c5434();
    DAT_00465198.enabled = 1;
    nn_os_LightEvent_Signal(DAT_00465198.sleepQueryEvent);
    nn_os_LightEvent_Signal(DAT_00465198.homeButtonEvent);
    FUN_00110124(FUN_0010e924, 0);
    FUN_00110110(appletSignalSleepQuery, 0);
    FUN_00110838(1);
    u32 result = 1;
    if (appletIsExitRequested() || FUN_002c55b4()) {
        result = 0;
    }
    return result;
}
}
