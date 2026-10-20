#include "common.h"

extern "C" {

typedef struct Global5b408c {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ s8 homeButtonHeld;
} Global5b408c;
extern Global5b408c DAT_005b408c;
extern u8 g_appletHomeButtonEvent[];
extern u8 g_nnAppletCriticalSection[];

void FUN_0015a568(void);
void nn_os_LightEvent_ClearSignal(u8 *object);
u8 nn_applet_CTR_IsExpectedToProcessHomeButton(void);
u8 nn_os_CriticalSection_TryEnter(void *section);

/* Home-button handling: returns 0 when the application is not expected to process the button; with the held flag set, 2 or 3 depending on whether the critical section could be entered; otherwise 1 after FUN_0015a568. */
u32 appletProcessHomeButton(void)
{
    u8 expected;
    u32 result;

    result = 0;
    expected = nn_applet_CTR_IsExpectedToProcessHomeButton();
    if (expected) {
        if (DAT_005b408c.homeButtonHeld != 0) {
            nn_os_LightEvent_ClearSignal(g_appletHomeButtonEvent);
            expected = nn_os_CriticalSection_TryEnter(g_nnAppletCriticalSection);
            result = (expected == 0) ? 2 : 3;
        } else {
            FUN_0015a568();
            result = 1;
        }
    }
    return result;
}

} /* extern "C" */
