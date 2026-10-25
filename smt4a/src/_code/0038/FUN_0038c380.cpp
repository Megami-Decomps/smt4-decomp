#include "common.h"
#include "battle/BtlMainAccess.h"


extern "C" {
s32 scrGetArg(u32 index);
s32 FUN_003eaf20(void);
void scrSetResult(u32 value);
u32 FUN_0038c380(void)
{
    s32 maximum = scrGetArg(0);
    s32 flag = 0;
    btlGetMainState();
    if (FUN_003eaf20() != 0) { flag = 1; }
    scrSetResult(flag <= maximum);
    return 1;
}
}
