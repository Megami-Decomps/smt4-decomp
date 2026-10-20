#include "common.h"

extern "C" {

void FUN_001af148(u8 *object);
void nn_applet_CTR_ReplySleepQuery(s32 reply);
extern u8 DAT_005b4090[];

/* Replies to the sleep query with 1 (allow), then calls FUN_001af148 on the object at 0x5B4090. */
void FUN_00138748(void)
{
    nn_applet_CTR_ReplySleepQuery(1);
    FUN_001af148(DAT_005b4090);
}

} /* extern "C" */
