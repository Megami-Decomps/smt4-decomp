#include "common.h"

extern "C" {

extern void dspFxStateGet(void);
extern u32 FUN_0016f384(void);

/* Runs dspFxStateGet, then registers the callbacks (FUN_0016f384). */
u32 FUN_0016f374(void)
{
    dspFxStateGet();
    return FUN_0016f384();
}

} /* extern "C" */
