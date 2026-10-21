/* NON_MATCHING: instruction selection/order differs: retail bl 0  [R_ARM_CALL FUN_00146ec8]; compiler pop {r4, lr}. */
#include "common.h"

extern "C" {

extern void FUN_001471a0(void);
extern void FUN_0013b754(u32 mode);
extern void FUN_00136cb4(u32 mode);
extern void FUN_00146ec8(void);

/* Initializes the runtime services in startup order. */
void nninitSetup(void)
{
    FUN_001471a0();
    FUN_0013b754(0);
    FUN_00136cb4(0);
    FUN_00146ec8();
}

} /* extern "C" */
