#include "battle/BtlMainAccess.h"
#include "common.h"


extern "C" {

void scrSetResult(s32 result);

/* Script command: reports whether the battle state's flag 0x80000 is clear. */
u32 FUN_0039dc2c(void)
{
    if ((btlGetMainState()->encounter.statusFlags & 0x80000) == 0) {
        scrSetResult(1);
    } else {
        scrSetResult(0);
    }
    return 1;
}

} /* extern "C" */
