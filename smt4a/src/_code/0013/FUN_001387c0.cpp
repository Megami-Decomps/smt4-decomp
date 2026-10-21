/* NON_MATCHING: instruction selection/order differs: retail beq 3c; compiler beq 38. */
#include "common.h"

extern "C" {

extern u8 DAT_005b40c8;
extern void FUN_0014374c(void);
extern s32 FUN_001a0380(void);
extern void FUN_0013ebd8(void);

/* Completes pending initialization and clears its flag on success. */
bool FUN_001387c0(void)
{
    if (DAT_005b40c8 == 0) {
        return true;
    }
    FUN_0014374c();
    s32 status = FUN_001a0380();
    FUN_0013ebd8();
    if (status >= 0) {
        DAT_005b40c8 = 0;
        return true;
    }
    return false;
}

} /* extern "C" */
