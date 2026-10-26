#include "common.h"

extern "C" {
u8 FUN_00110138(void);
u8 nn_os_CriticalSection_TryEnter(void *section);
void nn_applet_CTR_ReplySleepQuery(s32 allow);
extern s8 DAT_00465198;
extern u8 g_nnAppletCriticalSection[];

// Poll a sleep query, accepting it immediately or acquiring the application's lock.
u32 appletProcessSleepQuery(void)
{
    u32 result = 0;
    if (FUN_00110138()) {
        if (DAT_00465198 == 0) {
            nn_applet_CTR_ReplySleepQuery(0);
            result = 1;
        } else if (nn_os_CriticalSection_TryEnter(g_nnAppletCriticalSection)) {
            result = 2;
        }
    }
    return result;
}
}
