#include "battle/BtlMainAccess.h"
#include "common.h"

extern "C" {
u32 scrGetArg(u32 index);
u32 scrBattleClearFlag(void)
{
    u32 bit = scrGetArg(0);
    btlGetMainState()->flags49D0 &= ~(1 << bit);
    return 1;
}
}
