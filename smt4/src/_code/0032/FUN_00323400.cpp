#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {
s32 scrGetArg(u32 index);
void FUN_003381f0(void *state, s32 value);

/* Script command: passes the main battle state and its first argument to FUN_003381f0. */
s32 FUN_00323400(void)
{
    FUN_003381f0(static_cast<void *>(btlGetMainState()), scrGetArg(0));
    return 1;
}
}
