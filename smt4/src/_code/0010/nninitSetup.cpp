#include "common.h"

extern "C" {

extern void FUN_0010ffcc(void);
extern void FUN_00106dd4(u32 mode);
extern s32 FUN_001023e0(u32 mode);
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
