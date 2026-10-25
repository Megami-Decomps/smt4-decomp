#include "common.h"

extern "C" {

void partyAdjustCounterIfEnoughActive(s32 value);
s32 scrGetArg(s32 index);

/* Script command: passes the first argument to partyAdjustCounterIfEnoughActive. */
u32 FUN_0038d370(void)
{
    partyAdjustCounterIfEnoughActive(scrGetArg(0));
    return 1;
}

} /* extern "C" */
