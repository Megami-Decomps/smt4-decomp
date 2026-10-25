#include "battle/BtlMainAccess.h"
#include "common.h"


extern "C" {

s32 scrGetArg(u32 index);

/* Script command: stores argument zero in the battle state at 0x49c0. */
s32 FUN_0030b49c(void)
{
    s32 value = scrGetArg(0);
    btlGetMainState()->selectedGroup = value;
    return 1;
}

} /* extern "C" */
