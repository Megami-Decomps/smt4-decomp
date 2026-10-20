#include "common.h"

extern "C" {

int FUN_002c3424(u32 *event);
int nn_applet_CTR_ReplySleepQuery(int reply);

extern u32 DAT_0046519c;

void appletReplySleepQueryAllow(void)
{
    nn_applet_CTR_ReplySleepQuery(1);
    FUN_002c3424(&DAT_0046519c);
}

} /* extern "C" */
