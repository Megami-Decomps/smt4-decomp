#include "battle/BtlMainAccess.h"
#include "common.h"


extern "C" {

void scrSetResult(s32 result);

/* Script command: reports the battle state's word at 0x4ccc. */
u32 FUN_0039da04(void)
{
    scrSetResult(btlGetMainState()->selectedEntry.index);
    return 1;
}

} /* extern "C" */
