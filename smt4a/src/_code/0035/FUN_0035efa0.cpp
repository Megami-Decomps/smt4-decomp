#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {


int scrSetResult(s32 value);

/* Script command: result is the larger of the battle state's two 16-bit values at 0x4C70 and 0x4C72. */
u32 FUN_0035efa0(void)
{
    s16 value = btlGetMainState()->targetCapacity.counts[0];
    BtlMainStateA *state = btlGetMainState();

    if (value < state->targetCapacity.counts[1]) {
        value = state->targetCapacity.counts[1];
    }
    scrSetResult(value);
    return 1;
}

} /* extern "C" */
