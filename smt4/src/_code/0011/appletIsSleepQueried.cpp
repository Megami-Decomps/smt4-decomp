#include "common.h"

extern "C" {

extern int FUN_0011d2a0(void);

u8 appletIsSleepQueried(void)
{
    return FUN_0011d2a0() == 1;
}

} /* extern "C" */
