#include "battle/BtlMainAccess.h"
#include "common.h"


extern "C" {
s32 scrGetArg(u32 index);
}

extern "C" s32 FUN_0039db18(void)
{
    s32 value = scrGetArg(0);

    btlGetMainState()->selectedEntry.index = value;
    return 1;
}
