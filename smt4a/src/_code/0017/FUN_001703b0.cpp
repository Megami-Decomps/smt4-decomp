/* NON_MATCHING: retail keeps the 0 argument in r4 across the FUN_00170484 call (set only when `reply` is nonzero); built materialises it after the call */
#include "common.h"

extern "C" {

s32 FUN_00170484(s32 arg);
s32 nn_applet_CTR_detail_ReplySleepQueryToManager(u32 reply);

extern u8 DAT_005891f4;

/* Clears the sleep-pending flag; when `reply` is set, also tells the applet manager the sleep query is answered. */
void FUN_001703b0(s32 reply)
{
    DAT_005891f4 = 0;
    if (reply != 0) {
        FUN_00170484(3);
        nn_applet_CTR_detail_ReplySleepQueryToManager(0);
    }
}

} /* extern "C" */
