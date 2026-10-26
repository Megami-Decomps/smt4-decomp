#include "common.h"

extern "C" {
u8 FUN_0014733c(void);
u8 nn_os_CriticalSection_TryEnter(void *section);
void nn_applet_CTR_ReplySleepQuery(s32 allow);
extern s8 DAT_005b408c;
extern u8 g_nnAppletCriticalSection[];

// Poll a sleep query, accepting it immediately or acquiring the application's lock.
u32 appletProcessSleepQuery(void)
{
    u32 result = 0;
    if (FUN_0014733c()) {
        if (DAT_005b408c == 0) {
            nn_applet_CTR_ReplySleepQuery(0);
            result = 1;
        } else if (nn_os_CriticalSection_TryEnter(g_nnAppletCriticalSection)) {
            result = 2;
        }
    }
    return result;
}
}
