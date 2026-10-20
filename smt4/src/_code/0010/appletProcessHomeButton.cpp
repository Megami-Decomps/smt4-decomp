#include "common.h"

extern "C" {

int FUN_002c0d08(void);
u8 nn_applet_CTR_IsExpectedToProcessHomeButton(void);
u8 nn_os_CriticalSection_TryEnter(void *section);
void nn_os_LightEvent_ClearSignal(void *event);

extern struct {
    u8 unk00;
    s8 unk01;
} DAT_00465198;
extern u8 g_appletHomeButtonEvent[];
extern u8 g_nnAppletCriticalSection[];

/* Home button handling: 0 when the applet doesn't expect it; otherwise 1, or 2/3 by whether the critical section could be entered. */
u32 appletProcessHomeButton(void)
{
    u32 result = 0;

    if (nn_applet_CTR_IsExpectedToProcessHomeButton()) {
        if (DAT_00465198.unk01 != 0) {
            nn_os_LightEvent_ClearSignal(g_appletHomeButtonEvent);
            result = (nn_os_CriticalSection_TryEnter(g_nnAppletCriticalSection) == 0) ? 2 : 3;
        } else {
            FUN_002c0d08();
            result = 1;
        }
    }
    return result;
}

} /* extern "C" */
