/* NON_MATCHING: instruction selection/order differs: retail bl 0  [R_ARM_CALL FUN_0010fcf4]; compiler pop {r4, lr}. */
#include "common.h"

extern "C" {

extern void FUN_0010ffcc(void);
extern void FUN_00106dd4(u32 mode);
extern void FUN_001023e0(u32 mode);
extern void FUN_0010fcf4(void);

/* Initializes the runtime services in startup order. */
void nninitSetup(void)
{
    FUN_0010ffcc();
    FUN_00106dd4(0);
    FUN_001023e0(0);
    FUN_0010fcf4();
}

} /* extern "C" */
