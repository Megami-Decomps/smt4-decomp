#include "common.h"

extern "C" {

int FUN_00245228(u32 btl, int a, u32 b);
extern int FUN_00245278(u32 btl, u32 a);
extern u32 btlGetMainState(void);
extern u32 scrGetArg(u32 index);
extern int FUN_0033b35c(u32 btl, u32 a);

u8 FUN_00312540(void)
{
    u32 arg = scrGetArg(0);
    u32 btl = btlGetMainState();

    if (FUN_0033b35c(btl, 0) != 0) {
        return FUN_00245278(btl, 0) != 0;
    }
    FUN_00245228(btl, 0, arg);
    return 0;
}

} /* extern "C" */
