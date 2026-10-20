#include "common.h"

extern "C" {

extern u8 DAT_00465228;

int FUN_002c3510(void);
int FUN_002c3520(void);
int FUN_002c3dfc(void);

/* Runs FUN_002c3dfc between FUN_002c3520/FUN_002c3510; clears DAT_00465228 when its result has the sign bit clear (success). */
int FUN_00103c9c(void)
{
    int result;

    FUN_002c3520();
    result = FUN_002c3dfc();
    FUN_002c3510();
    if ((s32)(result & 0x80000000) >= 0) {
        DAT_00465228 = 0;
    }
    return result;
}

} /* extern "C" */
