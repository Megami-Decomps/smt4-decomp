/* Runs the shutdown hooks and returns the FUN_002c3dfc result; clears the "busy" byte when it succeeded (sign bit clear). */
#include "common.h"

extern "C" {

extern u8 DAT_00465240;

extern s32 FUN_0010e574(void);
extern s32 FUN_002c3510(void);
extern s32 FUN_002c3dfc(void);

s32 FUN_001041e8(void)
{
    s32 result;

    FUN_0010e574();
    result = FUN_002c3dfc();
    FUN_002c3510();
    if ((s32)(result & 0x80000000) >= 0) {
        DAT_00465240 = 0;
    }
    return result;
}

}
