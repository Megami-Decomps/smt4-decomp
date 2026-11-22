#include "common.h"

extern "C" {

extern void statusDownRebuildTouchRegions(void);

/* Forwards to the function that follows it in the binary. */
void FUN_00230d2c(void)
{
    statusDownRebuildTouchRegions();
}

} /* extern "C" */
