#include "common.h"

extern "C" {

void workCommandRefreshActiveSlots(void);

/* Calls workCommandRefreshActiveSlots and returns 1. */
u32 FUN_002a3f44(void)
{
    workCommandRefreshActiveSlots();
    return 1;
}

} /* extern "C" */
