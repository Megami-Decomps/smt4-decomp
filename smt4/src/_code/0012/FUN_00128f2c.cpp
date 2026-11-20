#include "common.h"

extern "C" {

extern void dspFxStateGet(void);
extern u32 FUN_00128f3c(void);

/* Runs dspFxStateGet, then registers the callbacks (FUN_00128f3c). */
u32 FUN_00128f2c(void)
{
    dspFxStateGet();
    return FUN_00128f3c();
}

} /* extern "C" */
