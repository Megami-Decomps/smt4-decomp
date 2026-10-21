/* NON_MATCHING: instruction selection/order differs: retail beq 3c; compiler beq 38. */
#include "common.h"

extern "C" {

extern u8 DAT_00465210;
extern void FUN_002c3414(void);
extern s32 FUN_002c3dfc(void);
extern void FUN_002c3510(void);

/* Completes pending initialization and clears its flag on success. */
bool FUN_00103d48(void)
{
    if (DAT_00465210 == 0) {
        return true;
    }
    FUN_002c3414();
    s32 status = FUN_002c3dfc();
    FUN_002c3510();
    if (status >= 0) {
        DAT_00465210 = 0;
        return true;
    }
    return false;
}

} /* extern "C" */
