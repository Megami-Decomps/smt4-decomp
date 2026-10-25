#include "battle/BtlMainAccess.h"

extern "C" {
void scrSetResult(s32 result);

/* Script command: sets the result to whether bit 18 of the main battle state's flags at 0x10c is clear. */
s32 FUN_00373da4(void)
{
    s32 result;
    if (btlGetMainState()->encounter.statusFlags & 0x40000)
        result = 0;
    else
        result = 1;
    scrSetResult(result);
    return 1;
}
}
