#include "common.h"

struct BtlMainFUN_002e430c;

extern "C" {

BtlMainFUN_002e430c *btlGetMainState(void);
void FUN_00336bec(BtlMainFUN_002e430c *state);

/* Script command: runs FUN_00336bec on the battle state. */
s32 FUN_002e430c(void)
{
    FUN_00336bec(btlGetMainState());
    return 1;
}

} /* extern "C" */
