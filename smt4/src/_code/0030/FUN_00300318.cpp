#include "battle/BtlMainAccess.h"
#include "common.h"


extern "C" {
u32 scrGetArg(u32 index);
void FUN_0033b0ac(void *battle, u16 first, u32 second);
u32 FUN_00300318(void)
{
    u32 first = scrGetArg(0);
    u32 second = scrGetArg(1);
    FUN_0033b0ac(static_cast<void *>(btlGetMainState()), first, second);
    return 1;
}
}
