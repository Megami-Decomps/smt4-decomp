/* NON_MATCHING: retail keeps the reply argument 0 in r4 (movne r4,#0 right after the compare, saved with lr); the build loads the immediate for the tail call */
#include "common.h"

extern "C" {

void FUN_002c130c(s32 value);
void nn_applet_CTR_detail_ReplySleepQueryToManager(u32 reply);

extern u8 g_appletSleepModuleState; /* 0x44e3b0 */

/* Clears the sleep-pending flag; when asked to, answers the sleep query. */
void sleepQueryAnswer(s32 answer)
{
    g_appletSleepModuleState = 0;
    if (answer != 0) {
        FUN_002c130c(3);
        nn_applet_CTR_detail_ReplySleepQueryToManager(0);
    }
}

} /* extern "C" */
