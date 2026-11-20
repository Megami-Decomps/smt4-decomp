#include "common.h"

extern "C" {

extern void statusDownRegisterTouchRegions(void);

/* Forwards to the function that follows it in the binary. */
void FUN_00230d2c(void)
{
    statusDownRegisterTouchRegions();
}

} /* extern "C" */
