#include "battle/BtlMainAccess.h"
#include "common.h"


extern "C" {

s32 scrGetArg(s32 index);

/* Script command: stores the first argument in the battle state's word at 0x4978. */
u32 FUN_00312b74(void)
{
    btlGetMainState()->completion.complete = scrGetArg(0);
    return 1;
}

} /* extern "C" */
