#include "common.h"

extern "C" {

int FUN_0029c43c(u32 value, int flag);
extern u32 DAT_00434228;
extern int FUN_002485b8(void);
extern u32 scrGetArg(u32 index);

u32 FUN_002e3acc(void)
{
    DAT_00434228 = scrGetArg(0);
    if (FUN_002485b8() != 0) {
        FUN_0029c43c(DAT_00434228, 0);
    }
    return 1;
}

} /* extern "C" */
